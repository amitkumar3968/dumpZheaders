/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "MobileBackup-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

@interface MBBackup : XXUnknownSuperclass <NSCopying, NSCoding> {
	NSString* _backupUDID;
	NSString* _deviceClass;
	NSString* _productType;
	NSString* _hardwareModel;
	NSString* _marketingName;
	NSArray* _snapshots;
	BOOL _restoreSystemFiles;
}
@property(readonly, assign, nonatomic, getter=canRestoreSystemFiles) BOOL restoreSystemFiles;	// @synthesize=_restoreSystemFiles
@property(readonly, assign, nonatomic) NSArray* snapshots;	// @synthesize=_snapshots
@property(readonly, assign, nonatomic) NSString* marketingName;	// @synthesize=_marketingName
@property(readonly, assign, nonatomic) NSString* hardwareModel;	// @synthesize=_hardwareModel
@property(readonly, assign, nonatomic) NSString* productType;	// @synthesize=_productType
@property(readonly, assign, nonatomic) NSString* deviceClass;	// @synthesize=_deviceClass
@property(readonly, assign, nonatomic) NSString* backupUDID;	// @synthesize=_backupUDID
// declared property getter: -(BOOL)canRestoreSystemFiles;
// declared property getter: -(id)snapshots;
// declared property getter: -(id)marketingName;
// declared property getter: -(id)hardwareModel;
// declared property getter: -(id)productType;
// declared property getter: -(id)deviceClass;
// declared property getter: -(id)backupUDID;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithBackupUDID:(id)backupUDID deviceClass:(id)aClass productType:(id)type hardwareModel:(id)model marketingName:(id)name snapshots:(id)snapshots restoreSystemFiles:(BOOL)files;
@end
