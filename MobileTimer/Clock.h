/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */



@protocol Clock
@property(readonly, assign, nonatomic) int runMode;
// declared property getter: -(int)runMode;
-(void)stop;
-(void)start;
-(void)updateTime;
@optional
-(void)updateFlutter;
@end

