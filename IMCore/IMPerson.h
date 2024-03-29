/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSData;

@interface IMPerson : XXUnknownSuperclass {
	int _recordID;
	BOOL _registered;
	BOOL _beingTornDown;
}
@property(readonly, assign, nonatomic) BOOL _beingTornDown;	// @synthesize
@property(readonly, assign, nonatomic) BOOL _registered;	// @synthesize
@property(readonly, assign, nonatomic) int _recordID;	// @synthesize
@property(readonly, assign, nonatomic) void* _recordRef;
@property(readonly, assign, nonatomic) unsigned status;
@property(readonly, assign, nonatomic) NSData* imageDataWithoutLoading;
@property(retain, nonatomic) NSData* imageData;
@property(readonly, assign, nonatomic) NSArray* mobileNumbers;
@property(assign, nonatomic) NSArray* phoneNumbers;
@property(readonly, assign, nonatomic) NSArray* allEmails;
@property(copy, nonatomic) NSArray* emails;
@property(readonly, assign, nonatomic) NSString* companyName;
@property(readonly, assign, nonatomic) BOOL isCompany;
@property(copy, nonatomic) NSString* lastName;
@property(copy, nonatomic) NSString* firstName;
@property(copy, nonatomic) NSString* nickname;
@property(readonly, assign, nonatomic) NSString* displayName;
@property(readonly, assign, nonatomic) NSString* fullName;
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSArray* groups;
@property(readonly, assign, nonatomic) BOOL isInAddressBook;
@property(readonly, assign, nonatomic) int recordID;
@property(readonly, assign, nonatomic) NSString* uniqueID;
+(id)existingABPersonWithFirstName:(id)firstName andLastName:(id)name andNickName:(id)name3 orEmail:(id)email orNumber:(id)number;
+(id)existingABPersonWithFirstName:(id)firstName andLastName:(id)name andNickName:(id)name3 orEmail:(id)email orNumber:(id)number countryCode:(id)code identifier:(int*)identifier;
+(id)existingABPersonWithFirstName:(id)firstName andLastName:(id)name andNickName:(id)name3 orEmail:(id)email orNumber:(id)number identifier:(int*)identifier;
+(id)existingABPersonWithFirstName:(id)firstName andLastName:(id)name orEmail:(id)email orNumber:(id)number;
+(id)existingABPersonForPerson:(id)person;
+(id)existingABPersonWithFirstName:(id)firstName andLastName:(id)name orEmail:(id)email;
+(id)existingABPersonWithFirstName:(id)firstName lastName:(id)name;
+(id)allPeople;
// declared property getter: -(BOOL)_beingTornDown;
// declared property getter: -(BOOL)_registered;
// declared property getter: -(int)_recordID;
-(unsigned)hash;
// declared property getter: -(unsigned)status;
// declared property getter: -(id)imageDataWithoutLoading;
// declared property getter: -(id)imageData;
-(void)_abPersonChanged:(id)changed;
// declared property getter: -(id)groups;
// declared property setter: -(void)setImageData:(id)data;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToIMPerson:(id)imperson;
// declared property getter: -(id)uniqueID;
-(BOOL)containsHandle:(id)handle forServiceProperty:(id)serviceProperty;
-(void)appendID:(id)anId toProperty:(id)property;
-(void)save;
// declared property getter: -(id)mobileNumbers;
// declared property getter: -(id)phoneNumbers;
-(id)allHandlesForProperty:(id)property;
-(void)setValues:(id)values forProperty:(id)property;
-(void)setValues:(id)values forIMProperty:(id)improperty;
-(id)valuesForProperty:(id)property;
-(id)valuesForIMProperty:(id)improperty;
// declared property getter: -(BOOL)isInAddressBook;
// declared property setter: -(void)setPhoneNumbers:(id)numbers;
// declared property setter: -(void)setEmails:(id)emails;
// declared property getter: -(id)allEmails;
// declared property getter: -(id)emails;
-(id)emailHandlesForService:(id)service;
-(id)emailHandlesForService:(id)service includeBaseEmail:(BOOL)email;
-(void)setFirstName:(id)name lastName:(id)name2;
// declared property setter: -(void)setLastName:(id)name;
// declared property getter: -(id)lastName;
// declared property setter: -(void)setFirstName:(id)name;
// declared property getter: -(id)firstName;
// declared property getter: -(id)fullName;
// declared property getter: -(id)nickname;
// declared property getter: -(id)name;
// declared property getter: -(id)displayName;
// declared property setter: -(void)setNickname:(id)nickname;
// declared property getter: -(id)companyName;
// declared property getter: -(BOOL)isCompany;
-(void)dealloc;
-(void)finalize;
-(oneway void)release;
// declared property getter: -(void*)_recordRef;
// declared property getter: -(int)recordID;
-(id)initWithABRecordID:(int)abrecordID;
-(id)init;
-(id)imHandleRegistrarGUID;
@end

