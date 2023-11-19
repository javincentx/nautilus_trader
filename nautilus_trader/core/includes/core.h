/* Generated with cbindgen:0.26.0 */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdint.h>
#include <Python.h>

#define MILLISECONDS_IN_SECOND 1000

#define NANOSECONDS_IN_SECOND 1000000000

#define NANOSECONDS_IN_MILLISECOND 1000000

#define NANOSECONDS_IN_MICROSECOND 1000

/**
 * `CVec` is a C compatible struct that stores an opaque pointer to a block of
 * memory, it's length and the capacity of the vector it was allocated from.
 *
 * NOTE: Changing the values here may lead to undefined behavior when the
 * memory is dropped.
 */
typedef struct CVec {
    /**
     * Opaque pointer to block of memory storing elements to access the
     * elements cast it to the underlying type.
     */
    void *ptr;
    /**
     * The number of elements in the block.
     */
    uintptr_t len;
    /**
     * The capacity of vector from which it was allocated.
     * Used when deallocating the memory
     */
    uintptr_t cap;
} CVec;

/**
 * Represents a pseudo-random UUID (universally unique identifier)
 * version 4 based on a 128-bit label as specified in RFC 4122.
 */
typedef struct UUID4_t {
    uint8_t value[37];
} UUID4_t;

/**
 * Converts seconds to nanoseconds (ns).
 */
uint64_t secs_to_nanos(double secs);

/**
 * Converts seconds to milliseconds (ms).
 */
uint64_t secs_to_millis(double secs);

/**
 * Converts milliseconds (ms) to nanoseconds (ns).
 */
uint64_t millis_to_nanos(double millis);

/**
 * Converts microseconds (μs) to nanoseconds (ns).
 */
uint64_t micros_to_nanos(double micros);

/**
 * Converts nanoseconds (ns) to seconds.
 */
double nanos_to_secs(uint64_t nanos);

/**
 * Converts nanoseconds (ns) to milliseconds (ms).
 */
uint64_t nanos_to_millis(uint64_t nanos);

/**
 * Converts nanoseconds (ns) to microseconds (μs).
 */
uint64_t nanos_to_micros(uint64_t nanos);

void cvec_drop(struct CVec cvec);

struct CVec cvec_new(void);

/**
 * Converts a UNIX nanoseconds timestamp to an ISO 8601 formatted C string pointer.
 */
const char *unix_nanos_to_iso8601_cstr(uint64_t timestamp_ns);

/**
 * Return the decimal precision inferred from the given C string.
 *
 * # Safety
 *
 * - Assumes `ptr` is a valid C string pointer.
 *
 * # Panics
 *
 * - If `ptr` is null.
 */
uint8_t precision_from_cstr(const char *ptr);

/**
 * Drops the C string memory at the pointer.
 *
 * # Safety
 *
 * - Assumes `ptr` is a valid C string pointer.
 *
 * # Panics
 *
 * - If `ptr` is null.
 */
void cstr_drop(const char *ptr);

struct UUID4_t uuid4_new(void);

/**
 * Returns a [`UUID4`] from C string pointer.
 *
 * # Safety
 *
 * - Assumes `ptr` is a valid C string pointer.
 *
 * # Panics
 *
 * - If `ptr` cannot be cast to a valid C string.
 */
struct UUID4_t uuid4_from_cstr(const char *ptr);

const char *uuid4_to_cstr(const struct UUID4_t *uuid);

uint8_t uuid4_eq(const struct UUID4_t *lhs, const struct UUID4_t *rhs);

uint64_t uuid4_hash(const struct UUID4_t *uuid);
