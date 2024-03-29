/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class OCPPackage, NSURL, OCPPackageRelationshipCollection;

__attribute__((visibility("hidden")))
@interface OCPPackagePart : XXUnknownSuperclass {
@private
	NSURL* mLocation;
	OCPPackageRelationshipCollection* mRelationships;
	OCPPackage* mPackage;
	xmlDoc* mDocument;
}
-(id)contentType;
-(id)package;
-(id)firstPartWithRelationshipOfType:(id)type;
-(id)relationshipsByType:(id)type;
-(id)relationshipForIdentifier:(id)identifier;
-(xmlTextReader*)xmlReader;
-(xmlDoc*)xmlDocument;
-(void)copyToFile:(id)file;
-(id)data;
-(id)location;
-(void)dealloc;
-(id)initWithLocation:(id)location relationshipsXml:(xmlDoc*)xml package:(id)package;
@end

