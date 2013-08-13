/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iGaiaGrapeSystemUi.h"

@class DPTextLayer, SKUnlockingSlider, SKButton, NSTimer;
@protocol iGaiaProject;

@interface GrapeCal_PAGE_Unlock : XXUnknownSuperclass <iGaiaGrapeSystemUi> {
	id<iGaiaProject> proj;
	DPTextLayer* cTxt_title;
	DPTextLayer* cTxt_sysInfo;
	SKUnlockingSlider* cSldr_unlock;
	SKUnlockingSlider* cSldr_shutdown;
	SKButton* cBtn_quit;
	NSTimer* tempMonitor;
}
-(void)quit:(id)quit;
-(void)unlock:(id)unlock;
-(void)temperatureUpdateFunc:(id)func;
-(void)addContentToLayer:(id)layer;
-(void)SetProject:(id)project;
-(id)init;
@end

