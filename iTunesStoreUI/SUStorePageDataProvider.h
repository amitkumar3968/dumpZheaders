/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ISPropertyListProvider, SUClientInterface;

@interface SUStorePageDataProvider : XXUnknownSuperclass {
@private
	SUClientInterface* _clientInterface;
	int _outputType;
	ISPropertyListProvider* _propertyListDataProvider;
}
@property(copy) ISPropertyListProvider* propertyListDataProvider;	// @synthesize=_propertyListDataProvider
@property(assign) int outputType;	// @synthesize=_outputType
@property(retain) SUClientInterface* clientInterface;	// @synthesize=_clientInterface
// declared property setter: -(void)setPropertyListDataProvider:(id)provider;
// declared property getter: -(id)propertyListDataProvider;
// declared property setter: -(void)setOutputType:(int)type;
// declared property getter: -(int)outputType;
// declared property setter: -(void)setClientInterface:(id)interface;
// declared property getter: -(id)clientInterface;
-(void)_loadPersonalizedStoreOffersForPage:(id)page;
-(BOOL)parseData:(id)data returningError:(id*)error;
-(void)dealloc;
@end

