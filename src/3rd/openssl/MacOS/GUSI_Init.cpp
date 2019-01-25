
#define GUSI_SOURCE
#include <GUSIConfig.h>
#include <sys/cdefs.h>

/* Declarations of Socket Factories */

__BEGIN_DECLS
void GUSIwithInetSockets();
void GUSIwithLocalSockets();
void GUSIwithMTInetSockets();
void GUSIwithMTTcpSockets();
void GUSIwithMTUdpSockets();
void GUSIwithOTInetSockets();
void GUSIwithOTTcpSockets();
void GUSIwithOTUdpSockets();
void GUSIwithPPCSockets();
void GUSISetupFactories();
__END_DECLS

/* Configure Socket Factories */

void GUSISetupFactories()
{
#ifdef GUSISetupFactories_BeginHook
	GUSISetupFactories_BeginHook
#endif
	GUSIwithInetSockets();
#ifdef GUSISetupFactories_EndHook
	GUSISetupFactories_EndHook
#endif
}

/* Declarations of File Devices */

__BEGIN_DECLS
void GUSIwithDConSockets();
void GUSIwithNullSockets();
void GUSISetupDevices();
__END_DECLS

/* Configure File Devices */

void GUSISetupDevices()
{
#ifdef GUSISetupDevices_BeginHook
	GUSISetupDevices_BeginHook
#endif
	GUSIwithNullSockets();
#ifdef GUSISetupDevices_EndHook
	GUSISetupDevices_EndHook
#endif
}

/**************** END GUSI CONFIGURATION *************************/
