/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import "WeatherXMLHTTPRequest.h"
#import "Weather-Structs.h"

@class NSMutableArray;
@protocol WeatherUpdaterDelegate;

@interface WeatherUpdater : WeatherXMLHTTPRequest {
	NSMutableArray* _updatingCities;
	NSMutableArray* _pendingCities;
	id<WeatherUpdaterDelegate> _delegate;
}
-(BOOL)isUpdatingCity:(id)city;
-(id)aggregateDictionaryDomain;
-(void)failWithError:(id)error;
-(void)didProcessDocument;
-(void)loadRequestURL:(id)url parameters:(id)parameters;
-(void)handleCompletionForCity:(id)city withUpdateDetail:(int)updateDetail;
-(void)handleNilCity;
-(void)processDocument:(xmlDoc*)document;
-(void)_failed:(int)failed;
-(void)addCityToPendingQueue:(id)pendingQueue;
-(void)_updateNextPendingCity;
-(void)dealloc;
-(id)init;
-(void)setDelegate:(id)delegate;
-(void)failCity:(id)city;
-(void)parsedResultCity:(id)city;
-(BOOL)isDataValid:(id)valid;
@end

