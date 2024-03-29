/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "SCRCArgumentSubcommand.h"

@class NSString, NSMutableArray;

@interface SCRCArgumentParser : SCRCArgumentSubcommand {
	int _argc;
	char** _argv;
	NSMutableArray* _subcommandArray;
	NSMutableArray* _argumentArray;
	NSString* _appName;
	SCRCArgumentSubcommand* _subcommand;
	BOOL _isLaunchedAtLogin;
}
@property(retain) NSString* appName;	// converted property
@property(readonly, assign) int argc;	// converted property
@property(readonly, assign) char** argv;	// converted property
@property(readonly, assign) BOOL isLaunchedAtLogin;	// converted property
+(id)commandPath;
+(id)versionString;
+(id)processIdentifier;
-(id)setRunningAtStartup:(id)startup;
-(id)_displayHelp:(id)help;
-(id)_displayVersion:(id)version;
-(void)stop;
-(int)run;
-(BOOL)parse;
-(void)addSubcommand:(id)subcommand;
// converted property getter: -(id)appName;
// converted property setter: -(void)setAppName:(id)name;
// converted property getter: -(BOOL)isLaunchedAtLogin;
// converted property getter: -(int)argc;
// converted property getter: -(char**)argv;
-(void)dealloc;
-(id)initWithArgc:(int)argc argv:(const char**)argv;
@end

