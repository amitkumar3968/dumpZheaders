/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SAPersonAttribute, NSString, NSArray, NSURL, NSDate, NSNumber;

@interface SAEmailEmail : SADomainObject {
}
@property(copy, nonatomic) NSString* type;
@property(copy, nonatomic) NSString* timeZoneId;
@property(copy, nonatomic) NSString* subject;
@property(copy, nonatomic) NSURL* referenceId;
@property(copy, nonatomic) NSArray* recipientsTo;
@property(copy, nonatomic) NSArray* recipientsCc;
@property(copy, nonatomic) NSArray* recipientsBcc;
@property(copy, nonatomic) NSArray* receivingAddresses;
@property(copy, nonatomic) NSNumber* outgoing;
@property(copy, nonatomic) NSString* message;
@property(retain, nonatomic) SAPersonAttribute* fromEmail;
@property(copy, nonatomic) NSDate* dateSent;
+(id)emailWithDictionary:(id)dictionary context:(id)context;
+(id)email;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setType:(id)type;
// declared property getter: -(id)type;
// declared property setter: -(void)setTimeZoneId:(id)anId;
// declared property getter: -(id)timeZoneId;
// declared property setter: -(void)setSubject:(id)subject;
// declared property getter: -(id)subject;
// declared property setter: -(void)setReferenceId:(id)anId;
// declared property getter: -(id)referenceId;
// declared property setter: -(void)setRecipientsTo:(id)to;
// declared property getter: -(id)recipientsTo;
// declared property setter: -(void)setRecipientsCc:(id)cc;
// declared property getter: -(id)recipientsCc;
// declared property setter: -(void)setRecipientsBcc:(id)bcc;
// declared property getter: -(id)recipientsBcc;
// declared property setter: -(void)setReceivingAddresses:(id)addresses;
// declared property getter: -(id)receivingAddresses;
// declared property setter: -(void)setOutgoing:(id)outgoing;
// declared property getter: -(id)outgoing;
// declared property setter: -(void)setMessage:(id)message;
// declared property getter: -(id)message;
// declared property setter: -(void)setFromEmail:(id)email;
// declared property getter: -(id)fromEmail;
// declared property setter: -(void)setDateSent:(id)sent;
// declared property getter: -(id)dateSent;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

