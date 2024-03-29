/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <Security/_kSecAttrServer.h>

@class NSString;

@interface PKPaper : _kSecAttrServer {
@private
	NSString* name;
	NSString* _baseName;
	int width;
	int height;
	int leftMargin;
	int topMargin;
	int rightMargin;
	int bottomMargin;
}
@property(assign, nonatomic) int bottomMargin;	// @synthesize
@property(assign, nonatomic) int rightMargin;	// @synthesize
@property(assign, nonatomic) int topMargin;	// @synthesize
@property(assign, nonatomic) int leftMargin;	// @synthesize
@property(assign, nonatomic) int height;	// @synthesize
@property(assign, nonatomic) int width;	// @synthesize
@property(readonly, assign, nonatomic) BOOL isBorderless;
@property(readonly, assign, nonatomic) float imageableArea;	// @dynamic
@property(readonly, assign, nonatomic) CGRect imageableAreaRect;
@property(readonly, assign, nonatomic) CGSize paperSize;
@property(readonly, assign, nonatomic) NSString* baseName;	// @dynamic
@property(retain, nonatomic) NSString* name;	// @synthesize
@property(readonly, assign, nonatomic) NSString* localizedName;	// @dynamic
+(id)documentPapers;
+(id)photoPapers;
+(BOOL)willAdjustMarginsForDuplexMode:(id)duplexMode;
+(id)genericBorderlessWithName:(id)name;
+(id)genericWithName:(id)name;
+(id)genericPRC32KPaper;
+(id)genericHagakiPaper;
+(id)genericA6Paper;
+(id)generic4x6Paper;
+(id)generic3_5x5Paper;
+(id)genericLetterPaper;
+(id)genericA4Paper;
// declared property setter: -(void)setBottomMargin:(int)margin;
// declared property getter: -(int)bottomMargin;
// declared property setter: -(void)setRightMargin:(int)margin;
// declared property getter: -(int)rightMargin;
// declared property setter: -(void)setTopMargin:(int)margin;
// declared property getter: -(int)topMargin;
// declared property setter: -(void)setLeftMargin:(int)margin;
// declared property getter: -(int)leftMargin;
// declared property setter: -(void)setHeight:(int)height;
// declared property getter: -(int)height;
// declared property setter: -(void)setWidth:(int)width;
// declared property getter: -(int)width;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)paperWithMarginsAdjustedForDuplexMode:(id)duplexMode;
// declared property getter: -(id)localizedName;
-(id)localizedNameFromDimensions;
-(void)dealloc;
// declared property getter: -(id)baseName;
-(id)nameWithoutSuffixes:(id)suffixes;
// declared property getter: -(BOOL)isBorderless;
// declared property getter: -(float)imageableArea;
// declared property getter: -(CGRect)imageableAreaRect;
// declared property getter: -(CGSize)paperSize;
-(id)initWithPWGSize:(pwg_size_s*)pwgsize localizedName:(id)name codeName:(id)name3;
-(id)initWithWidth:(int)width Height:(int)height Left:(int)left Top:(int)top Right:(int)right Bottom:(int)bottom localizedName:(id)name codeName:(id)name8;
@end

