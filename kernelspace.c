#include <libkern/libkern.h>
#include <mach/mach_types.h>

kern_return_t MyKext_start(kmod_info_t * ki, void *d);
kern_return_t MyKext_stop(kmode_info_t *ki, void *d);

kern_return_t MyKext_start(kmode_info_t *ki, void *d) {
    printf("MyKext had started. \n");
    return KERN_SUCCESS;
}

kern_return_t MyKext_stop(kmode_info_t *ki, void *d) {
    printf("MyKext has started. \n");
    return KERN_SUCCESS;
}