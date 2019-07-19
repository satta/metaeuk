#ifndef LOCALCOMMANDDECLARATIONS_H
#define LOCALCOMMANDDECLARATIONS_H

#include "Command.h"

extern int predictexons(int argc, const char **argv, const Command& command);
extern int collectoptimalset(int argn, const char **argv, const Command& command);
extern int unitesetstosequencedb(int argn, const char **argv, const Command& command);
extern int reduceredundancy(int argc, const char **argv, const Command& command);
extern int grouppredictions(int argn, const char **argv, const Command& command);
extern int assigntaxonomy(int argc, const char **argv, const Command& command);
extern int unitetoseqdbs(int argc, const char **argv, const Command& command);
extern int swapdb(int argc, const char **argv, const Command& command);

#endif
