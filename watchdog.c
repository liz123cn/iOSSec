#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOCFPlugin>

void disable_watchdog () {
    CFMutableDictionaryRef matching;
    io_service_t service = 0;
    uint32_t zero = 0;
    CFNumberRef n;

    matching = IOServiceMatching("IOWatchDogTimer");
    service = IOServiceGetMatchingService(KIOMasterService(KIOMasterPortDefault, matching);
    n = CFNumberCreate(KCFAllocatorDefault, KCFNumberIntType, &zero);
    
    IORegistryEntrySetCFProperties(service, n);
    IOObjectRelease(service);
}
