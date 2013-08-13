/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPMessageEntry : XXUnknownSuperclass {
@private
	int m_timeStamp;
	int m_tag;
	NSString* m_text;
	NSArray* m_parameters;
	NSMutableArray* m_affectedObjects;
	int m_count;
}
@property(assign, nonatomic) int timeStamp;	// @synthesize=m_timeStamp
@property(readonly, retain) NSMutableArray* affectedObjects;	// converted property
+(void)initialize;
// declared property setter: -(void)setTimeStamp:(int)stamp;
// declared property getter: -(int)timeStamp;
-(void)addAffectedObject:(id)object;
-(void)mergeEntries:(id)entries;
-(id)description;
-(void)logWithCat:(id)cat;
-(int)timeStampCompare:(id)compare;
-(int)getCount;
// converted property getter: -(id)affectedObjects;
-(id)getParameter:(unsigned)parameter;
-(int)getParameterCount;
-(id)getMessageText;
-(int)getMessageTag;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(id)initWithTag:(int)tag affectedObject:(id)object text:(id)text parameters:(void*)parameters;
@end
