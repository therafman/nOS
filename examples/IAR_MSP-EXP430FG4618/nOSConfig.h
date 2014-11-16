/* Define to value other than 0 to enable debug code. */
#define NOS_CONFIG_DEBUG                        1

/* Define to value other than 0 to enable arguments checking in nOS API. */
#define NOS_CONFIG_SAFE                         1

/* Highest priority a thread can take (up to 255). */
#define NOS_CONFIG_HIGHEST_THREAD_PRIO          15

/* Enable or disable scheduler locking. */
#define NOS_CONFIG_SCHED_LOCK_ENABLE            1
/* Enable or disable sleeping from running thread. */
#define NOS_CONFIG_SLEEP_ENABLE                 1

/* Enable or disable thread resume/suspend at run-time. */
#define NOS_CONFIG_THREAD_SUSPEND_ENABLE        1
/* Enable or disable thread deletion at run-time. */
#define NOS_CONFIG_THREAD_DELETE_ENABLE         1
/* Enable or disable thread set/get priority at run-time. */
#define NOS_CONFIG_THREAD_SET_PRIO_ENABLE       1

/* Enable or disable semaphore. */
#define NOS_CONFIG_SEM_ENABLE                   1
/* Enable or disable semaphore deletion at run-time. */
#define NOS_CONFIG_SEM_DELETE_ENABLE            1
/* Semaphore count width in bits (can be 8, 16 or 32) */
#define NOS_CONFIG_SEM_COUNT_WIDTH              16

/* Enable or disable mutex. */
#define NOS_CONFIG_MUTEX_ENABLE                 1
/* Enable or disable mutex deletion at run-time. */
#define NOS_CONFIG_MUTEX_DELETE_ENABLE          1

/* Enable or disable flag. */
#define NOS_CONFIG_FLAG_ENABLE                  1
/* Enable or disable flag deletion at run-time. */
#define NOS_CONFIG_FLAG_DELETE_ENABLE           1
/* Size of flag in bits (can be 8, 16 or 32) */
#define NOS_CONFIG_FLAG_NB_BITS                 16

/* Enable or disable queue. */
#define NOS_CONFIG_QUEUE_ENABLE                 1
/* Enable or disable queue deletion at run-time. */
#define NOS_CONFIG_QUEUE_DELETE_ENABLE          1

/* Enable or disable mem. */
#define NOS_CONFIG_MEM_ENABLE                   1
/* Enable or disable mem deletion at run-time. */
#define NOS_CONFIG_MEM_DELETE_ENABLE            1
/* Enable or disable sanity check of pointer when it is freed. */
#define NOS_CONFIG_MEM_SANITY_CHECK_ENABLE      1

/* Enable or disable timer thread with callback. */
#define NOS_CONFIG_TIMER_ENABLE                 1
/* Enable or disable dynamic timer deletion */
#define NOS_CONFIG_TIMER_DELETE_ENABLE          1
/* Priority of timer thread. */
#define NOS_CONFIG_TIMER_THREAD_PRIO            1
/* Stack size of timer thread. */
#define NOS_CONFIG_TIMER_THREAD_STACK_SIZE      128
/* Timer counter width in bits (can be 8, 16 or 32) */
#define NOS_CONFIG_TIMER_COUNT_WIDTH            16

/*
 * Stack size to use from interrupt routines in number of nOS_Stack entries.
 * Not used on all platforms.
 */
#define NOS_CONFIG_ISR_STACK_SIZE               128
