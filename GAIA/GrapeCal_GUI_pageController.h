/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */

#import "iGaiaGrapeSystemUi.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol iGaiaProject;

@interface GrapeCal_GUI_pageController : XXUnknownSuperclass <iGaiaGrapeSystemUi> {
	id<iGaiaProject> proj;
}
+(id)sharedInstance;
-(void)addContentsToMainLayer:(id)mainLayer;
-(void)showModuleInMainView:(id)mainView;
-(void)SetProject:(id)project;
-(id)init;
@end
