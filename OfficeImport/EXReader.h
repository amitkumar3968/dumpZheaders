/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCXReader.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EXReader : OCXReader {
@private
	NSString* mTemporaryDirectory;
}
@property(retain, nonatomic) NSString* temporaryDirectory;	// @synthesize=mTemporaryDirectory
// declared property setter: -(void)setTemporaryDirectory:(id)directory;
// declared property getter: -(id)temporaryDirectory;
-(id)read;
-(void)dealloc;
@end

