//#define NO_LOG
#include "simple_log.h"

int main(int argc, char **argv)
{
	logError("Test error logging");
	logWarning("Friendly warning: %s", "the cake is a lie");
	logDebug("Debug is fine, I guess");
	logInfo("'%c' is number %d !", 'A', 1);
	logVerbose("Blah blah blah");

	return 0;
}
