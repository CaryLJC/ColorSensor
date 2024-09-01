#include "jdprofile.h"

#include "addons/example.h"

// Edit the string below to match your company name, the device name, and hardware revision.
// The 0x0 will be replaced with a unique identifier the first time you run make.
// Do not change the generated 0x3.... value, as that would break the firmware update process.
FIRMWARE_IDENTIFIER(0x31d9c3b5, "InKsmith ColorSensor V1.0");//0x31d9c3b5

void app_init_services() {
    // see jacdac-c/services/jd_services.h for the services that can be
    // enabled here; you can enable zero or more services
	color_init(&color_click);	
}
