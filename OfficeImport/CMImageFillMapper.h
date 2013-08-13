/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class OADFill, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMImageFillMapper : CMMapper {
@private
	OADFill* mFill;
	OADOrientedBounds* mBounds;
}
-(BOOL)isCropped;
-(CGRect)uncroppedBox;
-(void)mapNonImageFillAt:(id)at toStyle:(id)style withState:(id)state;
-(void)mapImageFillAt:(id)at toStyle:(id)style withState:(id)state;
-(id)mapImageFill:(id)fill withState:(id)state;
-(void)mapAt:(id)at withState:(id)state;
-(id)initWithOadFill:(id)oadFill bounds:(id)bounds parent:(id)parent;
-(id)convertMetafileToPdf:(id)pdf state:(id)state;
-(id)blipAtIndex:(unsigned)index;
-(id)mainSubBlip;
@end
