/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDialogOperation.h"


@interface ISRetryDialogOperation : ISDialogOperation {
	BOOL _shouldRetry;
}
@property(assign) BOOL shouldRetry;	// @synthesize=_shouldRetry
+(id)operationWithTitle:(id)title message:(id)message;
// declared property setter: -(void)setShouldRetry:(BOOL)retry;
// declared property getter: -(BOOL)shouldRetry;
-(void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;
@end

