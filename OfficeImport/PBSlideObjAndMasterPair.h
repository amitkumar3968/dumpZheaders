/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PDSlide;

__attribute__((visibility("hidden")))
@interface PBSlideObjAndMasterPair : XXUnknownSuperclass {
@private
	PDSlide* mSlide;
	int mMasterId;
}
+(id)createPair:(id)pair masterId:(int)anId;
-(void)dealloc;
-(int)masterId;
-(id)slide;
-(void)setSlide:(id)slide masterId:(int)anId;
@end

