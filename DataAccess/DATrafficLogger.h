/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface DATrafficLogger : XXUnknownSuperclass {
	NSString* _filename;
}
+(BOOL)enabled;
-(void)slurpAndRemoveLookasideFile:(id)file prefixString:(id)string suffixString:(id)string3;
-(void)logSnippet:(id)snippet;
-(void)dealloc;
-(id)initWithFilename:(id)filename;
-(void)_ensureCustomLogFile;
@end

