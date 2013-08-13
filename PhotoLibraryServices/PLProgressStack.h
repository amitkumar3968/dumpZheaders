/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

@interface PLProgressStack : XXUnknownSuperclass {
@private
	id delegate;
	float currentMultiplier;
	NSMutableArray* multipliers;
	float currentTotal;
	BOOL notifyUsingAssetsdNotificationCenter;
	NSString* mediaPathString;
}
@property(retain, nonatomic) NSString* mediaPathString;	// @synthesize
@property(assign, nonatomic) BOOL notifyUsingAssetsdNotificationCenter;	// @synthesize
@property(assign, nonatomic) float currentTotal;	// @synthesize
@property(retain, nonatomic) NSMutableArray* multipliers;	// @synthesize
@property(assign, nonatomic) float currentMultiplier;	// @synthesize
@property(assign, nonatomic) id delegate;	// @synthesize
+(id)unarchiveFromDictionary:(id)dictionary;
// declared property setter: -(void)setMediaPathString:(id)string;
// declared property getter: -(id)mediaPathString;
// declared property setter: -(void)setNotifyUsingAssetsdNotificationCenter:(BOOL)center;
// declared property getter: -(BOOL)notifyUsingAssetsdNotificationCenter;
// declared property setter: -(void)setCurrentTotal:(float)total;
// declared property getter: -(float)currentTotal;
// declared property setter: -(void)setMultipliers:(id)multipliers;
// declared property getter: -(id)multipliers;
// declared property setter: -(void)setCurrentMultiplier:(float)multiplier;
// declared property getter: -(float)currentMultiplier;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(id)archiveToDictionary;
-(void)setCurrentMediaPath:(id)path;
-(void)popAndUpdate;
-(void)updateProgress:(float)progress;
-(void)dealloc;
-(float)totalProgress:(float)progress;
-(void)pop;
-(void)push:(float)push;
-(id)initWithDelegate:(id)delegate;
@end

