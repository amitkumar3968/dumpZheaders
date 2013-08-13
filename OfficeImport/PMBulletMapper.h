/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADParagraphProperties, CMStyle;

__attribute__((visibility("hidden")))
@interface PMBulletMapper : CMMapper {
@private
	OADParagraphProperties* mProperties;
	CMStyle* mStyle;
	int mFontSize;
}
+(id)stringForIndex:(int)index withFormat:(int)format;
-(void)mapAt:(id)at withState:(id)state;
-(void)dealloc;
-(id)initWithOadProperties:(id)oadProperties fontSize:(int)size parent:(id)parent;
-(id)makeBulletWithListState:(id)listState;
-(void)mapBulletColorWithState:(id)state;
-(id)bulletFontName;
-(int)bulletSize;
@end

