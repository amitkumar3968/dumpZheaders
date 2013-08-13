/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHDDataValuesCollection : XXUnknownSuperclass {
@private
	CFDataRef mPackedValues;
	unsigned mDataValueCount;
	CFDictionaryRef mIndexToDataValueMap;
	bool mContainsStringValue;
}
-(bool)containsStringValue;
-(void)finishReading;
-(id)dataValueWithIndex:(unsigned)index;
-(id)dataValueAtIndex:(unsigned)index;
-(CHDDataPoint*)dataPointWithIndex:(unsigned)index;
-(CHDDataPoint*)dataPointAtIndex:(unsigned)index;
-(bool)addDataValue:(id)value;
-(bool)addDataPoint:(CHDDataPoint*)point;
-(unsigned)count;
-(void)dealloc;
-(void)resetWithDataPointCount:(unsigned)dataPointCount;
-(id)initWithDataPointCount:(unsigned)dataPointCount;
-(id)init;
-(void)cleanup;
-(void)setupBufferForValues:(unsigned)values;
@end

