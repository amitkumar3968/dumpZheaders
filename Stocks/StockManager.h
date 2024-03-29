/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSUbiquitousKeyValueStore, NSMutableArray;

@interface StockManager : XXUnknownSuperclass {
	NSMutableArray* _defaultListStockSymbols;
	BOOL _shouldPostSyncNotifications;
	NSMutableArray* _stocksList;
	NSMutableArray* _chartDataLRUCache;
	double _lastModifiedTime;
	BOOL _needRemoteAddNotification;
	BOOL _needRemoteMoveNotification;
	NSUbiquitousKeyValueStore* _syncedKVStore;
}
@property(readonly, retain) NSMutableArray* stocksList;	// converted property
+(void)clearSharedManager;
+(id)sharedManager;
-(void).cxx_destruct;
-(void)_checkForMovedStocks;
-(void)_checkForAddedStocks;
-(void)saveDataChanges;
-(void)saveListChanges;
-(void)_saveDataChangesWithDictionaries:(id)dictionaries;
-(BOOL)anyMarketOpen;
-(BOOL)anyMarketOpenWithRealtimePrice;
-(BOOL)anyPriceIsRealtime;
-(void)clearCachedChartDataImageSets;
-(void)clearCachedChartData;
-(void)UpdateChartDataInLRU:(id)lru;
-(void)DeleteChartData:(id)data;
-(void)RemoveChartDataFromLRU:(id)lru;
-(void)moveStockFromIndex:(int)index toIndex:(int)index2;
-(void)removeStock:(id)stock;
-(void)addStock:(id)stock;
-(id)stockWithSymbol:(id)symbol;
// converted property getter: -(id)stocksList;
-(BOOL)setLocalStockListFromSyncableStockList:(id)syncableStockList;
-(id)makeSyncableStockListFromList:(id)list;
-(void)handleSyncedDataChanged:(id)changed;
-(void)reloadStocksFromDefaults;
-(id)_defaultStockDictionaries;
-(id)_localeStocks;
-(id)stockForURL:(id)url;
-(void)dealloc;
-(id)init;
@end

