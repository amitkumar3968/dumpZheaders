/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, SSURLRequestProperties;

@interface ASConstructSoftwareUpdatesRequestOperation : XXUnknownSuperclass {
	SSURLRequestProperties* _inputProperties;
	SSURLRequestProperties* _outputProperties;
	NSArray* _softwareTypes;
}
@property(readonly, assign) SSURLRequestProperties* softwareUpdatesRequestProperties;
-(id)_bodyDataWithContentEncoding:(id*)contentEncoding error:(id*)error;
-(void)run;
// declared property getter: -(id)softwareUpdatesRequestProperties;
-(void)dealloc;
-(id)initWithRequestProperties:(id)requestProperties softwareTypes:(id)types;
@end

