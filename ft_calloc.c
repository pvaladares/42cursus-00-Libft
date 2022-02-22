// MALLOC(3)                 Library Functions Manual                MALLOC(3)
//
// NAME
//      calloc, free, malloc, realloc, reallocf, valloc, aligned_alloc – memory
//		allocation
//
// SYNOPSIS
//      #include <stdlib.h>
//
//      void *
//      calloc(size_t count, size_t size);
//
//      void
//      free(void *ptr);
//
//      void *
//      malloc(size_t size);
//
//      void *
//      realloc(void *ptr, size_t size);
//
//      void *
//      reallocf(void *ptr, size_t size);
//
//      void *
//      valloc(size_t size);
//
//      void *
//      aligned_alloc(size_t alignment, size_t size);
//
// DESCRIPTION
//      The malloc(), calloc(), valloc(), realloc(), and reallocf() functions 
//		allocate memory.  The allocated memory is aligned such that it can be 
//		used for any data type, including AltiVec- and SSE-related types.  
//		The aligned_alloc() function allocates memory with the requested 
//		alignment.  The free() function frees allocations that were created 
//		via the preceding allocation functions.
//
//      The malloc() function allocates size bytes of memory and returns a 
//		pointer to the allocated memory.
//
//      The calloc() function contiguously allocates enough space for count objects that are
//      size bytes of memory each and returns a pointer to the allocated memory.  The
//      allocated memory is filled with bytes of value zero.
//
//      The valloc() function allocates size bytes of memory and returns a pointer to the
//      allocated memory.  The allocated memory is aligned on a page boundary.
//
//      The aligned_alloc() function allocates size bytes of memory with an alignment
//      specified by alignment and returns a pointer to the allocated memory.
//
//      The realloc() function tries to change the size of the allocation pointed to by ptr
//      to size, and returns ptr.  If there is not enough room to enlarge the memory
//      allocation pointed to by ptr, realloc() creates a new allocation, copies as much of
//      the old data pointed to by ptr as will fit to the new allocation, frees the old
//      allocation, and returns a pointer to the allocated memory.  If ptr is NULL, realloc()
//      is identical to a call to malloc() for size bytes.  If size is zero and ptr is not
//      NULL, a new, minimum sized object is allocated and the original object is freed.
//      When extending a region allocated with calloc(3), realloc(3) does not guarantee that
//      the additional memory is also zero-filled.
//
//      The reallocf() function is identical to the realloc() function, except that it will
//      free the passed pointer when the requested memory cannot be allocated.  This is a
//      FreeBSD specific API designed to ease the problems with traditional coding styles for
//      realloc causing memory leaks in libraries.
//
//      The free() function deallocates the memory allocation pointed to by ptr. If ptr is a
//      NULL pointer, no operation is performed.
//
// RETURN VALUES
//      If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and
//      aligned_alloc() functions return a pointer to allocated memory.  If there is an
//      error, they return a NULL pointer and set errno to ENOMEM.
//
//      In addition, aligned_alloc() returns a NULL pointer and sets errno to EINVAL if size
//      is not an integral multiple of alignment, or if alignment is not a power of 2 at
//      least as large as sizeof(void *).
//
//      For realloc(), the input pointer is still valid if reallocation failed.  For
//      reallocf(), the input pointer will have been freed if reallocation failed.
//
//      The free() function does not return a value.
//
// DEBUGGING ALLOCATION ERRORS
//      A number of facilities are provided to aid in debugging allocation errors in
//      applications.  These facilities are primarily controlled via environment variables.
//      The recognized environment variables and their meanings are documented below.
//
// ENVIRONMENT
//      The following environment variables change the behavior of the allocation-related
//      functions.
//
//      MallocDebugReport                If set, specifies where messages are written. Set to
//                                       "stderr" to write messages to the standard error
//                                       stream, "none" to discard all messages and "crash"
//                                       to write messages to standard error only for a
//                                       condition that is about to cause a crash. When not
//                                       set, message are written to the standard error
//                                       stream if it appears to be a terminal (that is, if
//                                       isatty(STDERR_FILENO) returns a non-zero value) and
//                                       are otherwise discarded.
//
//      MallocGuardEdges                 If set, add a guard page before and after each large
//                                       block.
//
//      MallocDoNotProtectPrelude        If set, do not add a guard page before large blocks,
//                                       even if the MallocGuardEdges environment variable is
//                                       set.
//
//      MallocDoNotProtectPostlude       If set, do not add a guard page after large blocks,
//                                       even if the MallocGuardEdges environment variable is
//                                       set.
//
//      MallocStackLogging               The default behavior if this is set is to record all
//                                       allocation and deallocation events to an on-disk
//                                       log, along with stacks, so that tools like leaks(1)
//                                       and malloc_history(1) can be used.
//
//                                       Set to "vm" to record only allocation of virtual
//                                       memory regions allocated by system calls and mach
//                                       traps, such as by mmap(1)
//
//                                       Set to "malloc" to record only allocations via
//                                       malloc(3) and related interfaces, not virtual memory
//                                       regions.
//
//                                       Set to "lite" to record current allocations only,
//                                       not history.   These are recorded by in-memory data
//                                       structures, instead of an on-disk log.
//
//      MallocStackLoggingNoCompact      If set, record all stacks in a manner that is
//                                       compatible with the malloc_history program.
//
//      MallocStackLoggingDirectory      If set, records stack logs to the directory
//                                       specified instead of saving them to the default
//                                       location (/tmp).
//
//      MallocScribble                   If set, fill memory that has been allocated with
//                                       0xaa bytes.  This increases the likelihood that a
//                                       program making assumptions about the contents of
//                                       freshly allocated memory will fail.  Also if set,
//                                       fill memory that has been deallocated with 0x55
//                                       bytes.  This increases the likelihood that a program
//                                       will fail due to accessing memory that is no longer
//                                       allocated. Note that due to the way in which freed
//                                       memory is managed internally, the 0x55 pattern may
//                                       not appear in some parts of a deallocated memory
//                                       block.
//
//      MallocCheckHeapStart <s>         If set, specifies the number of allocations <s> to
//                                       wait before begining periodic heap checks every <n>
//                                       as specified by MallocCheckHeapEach.  If
//                                       MallocCheckHeapStart is set but MallocCheckHeapEach
//                                       is not specified, the default check repetition is
//                                       1000.
//
//      MallocCheckHeapEach <n>          If set, run a consistency check on the heap every
//                                       <n> operations.  MallocCheckHeapEach is only
//                                       meaningful if MallocCheckHeapStart is also set.
//
//      MallocCheckHeapSleep <t>         Sets the number of seconds to sleep (waiting for a
//                                       debugger to attach) when MallocCheckHeapStart is set
//                                       and a heap corruption is detected.  The default is
//                                       100 seconds.  Setting this to zero means not to
//                                       sleep at all.  Setting this to a negative number
//                                       means to sleep (for the positive number of seconds)
//                                       only the very first time a heap corruption is
//                                       detected.
//
//      MallocCheckHeapAbort <b>         When MallocCheckHeapStart is set and this is set to
//                                       a non-zero value, causes abort(3) to be called if a
//                                       heap corruption is detected, instead of any
//                                       sleeping.
//
//      MallocErrorAbort                 If set, causes abort(3) to be called if an error was
//                                       encountered in malloc(3) or free(3) , such as a
//                                       calling free(3) on a pointer previously freed.
//
//      MallocCorruptionAbort            Similar to MallocErrorAbort but will not abort in
//                                       out of memory conditions, making it more useful to
//                                       catch only those errors which will cause memory
//                                       corruption.  MallocCorruptionAbort is always set on
//                                       64-bit processes.
//
//      MallocHelp                       If set, print a list of environment variables that
//                                       are paid heed to by the allocation-related
//                                       functions, along with short descriptions.  The list
//                                       should correspond to this documentation.

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	dst = malloc(tot_size);
	if (!(dst))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
