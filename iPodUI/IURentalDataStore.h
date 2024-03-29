/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue, NSMutableSet, NSMutableDictionary, ML3QueryResultSet, NSObject;
@protocol OS_dispatch_queue;

@interface IURentalDataStore : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableSet* _localNotifications;
	NSOperationQueue* _operationQueue;
	int _pendingRentalEventCount;
	NSMutableDictionary* _rentalDataByPID;
	ML3QueryResultSet* _resultSet;
	BOOL _shouldReloadRentalData;
}
+(id)existingInstance;
+(id)sharedInstance;
-(void)_scheduleRentalEvents;
-(void)_resetLocalNotifications;
-(id)_rentalDataForMediaItem:(id)mediaItem;
-(void)_loadRentalDataFromLibrary;
-(id)_rentalItems;
-(BOOL)_isLoadingRentalData:(id)data;
-(void)_handleFinishedOperation:(id)operation;
-(void)_enqueueOperation:(id)operation;
-(void)_libraryDisplayValuesDidChange:(id)_libraryDisplayValues;
-(void)_libraryDidChangeNotification:(id)_library;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)resetRentalDataForMediaItem:(id)mediaItem reason:(unsigned)reason;
-(void)resetAllDataForReason:(unsigned)reason;
-(id)rentalDataForMediaItem:(id)mediaItem;
-(void)loadRentalDataFromLibrary;
-(void)loadRentalData:(id)data withReason:(int)reason;
-(BOOL)handleLocalNotification:(id)notification;
-(void)dealloc;
-(id)init;
@end

