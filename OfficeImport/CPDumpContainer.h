/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CPDumpType.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CPDumpContainer : CPDumpType {
@private
	int mByteSize;
	int mByteSizeFieldType;
	NSString* mByteSizeFieldName;
	int mByteSizeCorrection;
	CPDumpType* mElementType;
}
-(void)fromBinary:(FILE*)binary toXml:(xmlNode*)xml state:(id)state;
-(void)dealloc;
-(id)initWithByteSizeFieldName:(id)byteSizeFieldName byteSizeCorrection:(int)correction elementType:(id)type;
-(id)initWithByteSizeFieldName:(id)byteSizeFieldName elementType:(id)type;
-(id)initWithByteSizeFieldType:(int)byteSizeFieldType byteSizeCorrection:(int)correction elementType:(id)type;
-(id)initWithByteSizeFieldType:(int)byteSizeFieldType elementType:(id)type;
-(id)initWithByteSize:(int)byteSize elementType:(id)type;
-(id)initWithByteSize:(int)byteSize byteSizeFieldType:(int)type byteSizeFieldName:(id)name byteSizeCorrection:(int)correction elementType:(id)type5;
@end

