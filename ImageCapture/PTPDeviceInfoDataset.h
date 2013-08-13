/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, NSMutableData;

@interface PTPDeviceInfoDataset : XXUnknownSuperclass {
	NSMutableData* _content;
	BOOL _dirty;
	unsigned short _standardVersion;
	unsigned long _vendorExtensionID;
	unsigned short _vendorExtensionVersion;
	NSString* _vendorExtensionDescription;
	unsigned short _functionalMode;
	NSMutableArray* _operationsSupported;
	NSMutableArray* _eventsSupported;
	NSMutableArray* _devicePropertiesSupported;
	NSMutableArray* _captureFormats;
	NSMutableArray* _imageFormats;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _deviceVersion;
	NSString* _serialNumber;
	BOOL _readOnlyObject;
}
@property(retain) NSString* serialNumber;	// converted property
@property(retain) NSString* deviceVersion;	// converted property
@property(retain) NSString* model;	// converted property
@property(retain) NSString* manufacturer;	// converted property
@property(retain) NSMutableArray* imageFormats;	// converted property
@property(retain) NSMutableArray* captureFormats;	// converted property
@property(retain) NSMutableArray* devicePropertiesSupported;	// converted property
@property(retain) NSMutableArray* eventsSupported;	// converted property
@property(retain) NSMutableArray* operationsSupported;	// converted property
@property(assign) unsigned short functionalMode;	// converted property
@property(retain) NSString* vendorExtensionDescription;	// converted property
@property(assign) unsigned short vendorExtensionVersion;	// converted property
@property(assign) unsigned long vendorExtensionID;	// converted property
@property(assign) unsigned short standardVersion;	// converted property
@property(retain) NSMutableData* content;	// converted property
-(id)canonicalManufacturer;
// converted property setter: -(void)setSerialNumber:(id)number;
// converted property getter: -(id)serialNumber;
// converted property setter: -(void)setDeviceVersion:(id)version;
// converted property getter: -(id)deviceVersion;
// converted property setter: -(void)setModel:(id)model;
// converted property getter: -(id)model;
// converted property setter: -(void)setManufacturer:(id)manufacturer;
// converted property getter: -(id)manufacturer;
// converted property setter: -(void)setImageFormats:(id)formats;
// converted property getter: -(id)imageFormats;
// converted property setter: -(void)setCaptureFormats:(id)formats;
// converted property getter: -(id)captureFormats;
// converted property setter: -(void)setDevicePropertiesSupported:(id)supported;
// converted property getter: -(id)devicePropertiesSupported;
// converted property setter: -(void)setEventsSupported:(id)supported;
// converted property getter: -(id)eventsSupported;
// converted property setter: -(void)setOperationsSupported:(id)supported;
// converted property getter: -(id)operationsSupported;
// converted property setter: -(void)setFunctionalMode:(unsigned short)mode;
// converted property getter: -(unsigned short)functionalMode;
// converted property setter: -(void)setVendorExtensionDescription:(id)description;
// converted property getter: -(id)vendorExtensionDescription;
// converted property setter: -(void)setVendorExtensionVersion:(unsigned short)version;
// converted property getter: -(unsigned short)vendorExtensionVersion;
// converted property setter: -(void)setVendorExtensionID:(unsigned long)anId;
// converted property getter: -(unsigned long)vendorExtensionID;
// converted property setter: -(void)setStandardVersion:(unsigned short)version;
// converted property getter: -(unsigned short)standardVersion;
-(id)description;
// converted property getter: -(id)content;
-(void)updateContent;
-(void)dealloc;
-(id)initWithMutableData:(id)mutableData;
-(id)initWithData:(id)data;
// converted property setter: -(void)setContent:(id)content;
-(id)init;
@end

