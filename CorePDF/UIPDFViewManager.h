/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView;

@interface UIPDFViewManager : XXUnknownSuperclass {
	UIView* _activeView;
}
+(id)sharedViewManager;
-(void)viewReleased:(id)released;
-(void)makeViewActive:(id)active;
@end

