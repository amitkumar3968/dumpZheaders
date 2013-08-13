/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOSearchAttributionListener : XXUnknownSuperclass {
@private
	NSString* _identifier;
	unsigned _version;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _errorHandlers;
}
@property(readonly, assign, nonatomic) unsigned version;	// @synthesize=_version
@property(readonly, assign, nonatomic) NSString* identifier;	// @synthesize=_identifier
// declared property getter: -(unsigned)version;
// declared property getter: -(id)identifier;
-(void)handleError:(id)error;
-(void)handleInfo:(id)info updatedManifest:(BOOL)manifest;
-(void)addCompletionHandler:(id)handler errorHandler:(id)handler2;
-(void)dealloc;
-(id)initWithIdentifier:(id)identifier version:(unsigned)version;
@end

