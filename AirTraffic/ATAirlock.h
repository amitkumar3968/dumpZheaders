/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSFileManager;

@interface ATAirlock : XXUnknownSuperclass {
	NSFileManager* _fm;
}
+(id)pathForDataclass:(id)dataclass;
+(id)geniusPathForDataclass:(id)dataclass geniusIdentifier:(id)identifier;
+(id)artworkPathForDataclass:(id)dataclass artworkIdentifier:(id)identifier;
+(id)sharedInstance;
-(void)handleCompletedAsset:(id)asset;
-(void)copyAssetToAirlock:(id)airlock;
-(void)purgeAssetWithIdentifier:(id)identifier dataclass:(id)dataclass;
-(void)evacuateDataclasses:(id)dataclasses;
-(void)createAirlockForDataclasses:(id)dataclasses;
@end
