/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUSimpleOutputStream.h"


@protocol SFUOutputStream <SFUSimpleOutputStream>
-(id)closeLocalStream;
-(void)close;
-(id)inputStream;
-(BOOL)canCreateInputStream;
-(long long)offset;
-(void)seekToOffset:(long long)offset whence:(int)whence;
-(BOOL)canSeek;
@end

