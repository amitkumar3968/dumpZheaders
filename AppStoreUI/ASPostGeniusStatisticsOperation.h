/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ASGeniusStatisticsConsumer;

@interface ASPostGeniusStatisticsOperation : XXUnknownSuperclass {
	ASGeniusStatisticsConsumer* _activeDataStoreConsumer;
	BOOL _ignorePostInterval;
}
@property(assign) BOOL shouldIgnorePostInterval;	// @synthesize=_ignorePostInterval
+(void)load;
// declared property setter: -(void)setShouldIgnorePostInterval:(BOOL)ignorePostInterval;
// declared property getter: -(BOOL)shouldIgnorePostInterval;
-(BOOL)_shouldSendStatistics;
-(BOOL)_shouldSendDataUsage;
-(void)_setActiveDataStoreConsumer:(id)consumer;
-(BOOL)_postRequestDictionary:(id)dictionary returningError:(id*)error;
-(void)_getKiloBytesSent:(float*)sent received:(float*)received forPDP:(long)pdp;
-(id)_copyStatisticsByKey;
-(BOOL)_copyRequestBody:(id*)body forDictionary:(id)dictionary returningError:(id*)error;
-(id)_copyOperationForConfiguration:(id)configuration bodyData:(id)data;
-(id)_copyDictionaryForSystemApplication:(id)systemApplication statistics:(id)statistics;
-(id)_copyDictionaryForInstalledApplication:(id)installedApplication statistics:(id)statistics;
-(id)_copyDataUsageDictionary;
-(id)_copyBodyDictionaryReturningError:(id*)error;
-(id)_configuration;
-(id)_activeDataStoreConsumer;
-(void)setScriptOptions:(id)options;
-(void)run;
-(void)cancel;
-(void)dealloc;
@end
