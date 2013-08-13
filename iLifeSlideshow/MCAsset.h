/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCObject.h"

@class NSMutableSet, NSString;

@interface MCAsset : MCObject {
@private
	NSMutableSet* mTexts;
	NSString* mPath;
}
@property(readonly, assign, nonatomic) BOOL isInUse;
@property(copy) NSString* path;	// @synthesize=mPath
// declared property setter: -(void)setPath:(id)path;
// declared property getter: -(id)path;
-(void)_copySelfToSnapshot:(id)snapshot;
-(void)forgetText:(id)text;
-(void)learnText:(id)text;
// declared property getter: -(BOOL)isInUse;
-(id)imprint;
-(void)demolish;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
@end

