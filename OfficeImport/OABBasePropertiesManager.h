/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OABFillPropertiesManager.h"


@protocol OABBasePropertiesManager <OABFillPropertiesManager>
-(long)shadowSoftness;
-(long)shadowOffsetY;
-(long)shadowOffsetX;
-(long)shadowAlpha;
-(EshColor)shadowColor;
-(int)shadowType;
-(BOOL)isShadowed;
-(int)strokeEndArrowLength;
-(int)strokeEndArrowWidth;
-(int)strokeEndArrowType;
-(int)strokeStartArrowLength;
-(int)strokeStartArrowWidth;
-(int)strokeStartArrowType;
-(int)strokeJoinStyle;
-(int)strokeCapStyle;
-(const EshTablePropVal<long>*)strokeCustomDash;
-(int)strokePresetDash;
-(int)strokeCompoundType;
-(long)strokeMiterLimit;
-(long)strokeWidth;
-(long)strokeFgAlpha;
-(id)strokeFillBlipName;
-(unsigned long)strokeFillBlipID;
-(int)strokeFillType;
@end

