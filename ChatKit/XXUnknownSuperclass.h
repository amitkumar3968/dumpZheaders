/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (CKMessageEntryViewDelegate)
-(BOOL)getContainerWidth:(float*)width offset:(float*)offset;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)disabled;
-(void)messageEntryViewSendButtonHit:(id)hit;
-(BOOL)messageEntryView:(id)view contentSizeChanged:(CGSize)changed animate:(BOOL)animate;
@end

@interface XXUnknownSuperclass (CKTranscriptPlacardButton)
-(void)insetsForRightAlignedImage:(UIEdgeInsets*)rightAlignedImage imageInset:(UIEdgeInsets*)inset;
@end

@interface XXUnknownSuperclass (ReachingIn)
-(id)addButton;
@end

@interface XXUnknownSuperclass (SMSPhoneNumberNormalization)
-(id)unformattedPhoneNumber;
@end

@interface XXUnknownSuperclass (CKEntityInternal)
-(id)imageScaledToSize:(CGSize)size cornerRadius:(float)radius;
@end

@interface XXUnknownSuperclass (ChatKitAdditions)
+(id)ckImageWithData:(id)data;
+(id)ckImageNamed:(id)named;
-(void)decode;
-(id)imageWithOrientation:(int)orientation;
@end

@interface XXUnknownSuperclass (ChatKitAdditions)
-(BOOL)containsFirstResponder;
@end

@interface XXUnknownSuperclass (ChatKitAdditions)
-(BOOL)containsAttribute:(id)attribute;
@end

@interface XXUnknownSuperclass (ChatKitAdditions)
-(void)replaceOccurrencesOfCharactersFromSet:(id)set withString:(id)string range:(NSRange)range;
@end

@interface XXUnknownSuperclass (CKUtilities)
-(id)__ck_commaJoinedValueForKey:(id)key;
@end

@interface XXUnknownSuperclass (CKMediaObjectPartAdditions)
-(id)mediaObjects;
@end

@interface XXUnknownSuperclass (ChatKitAdditions)
-(BOOL)ckCanDismissWhenSuspending;
@end

@interface XXUnknownSuperclass (ChatKitAdditions)
-(BOOL)ckCanDismissWhenSuspending;
@end

@interface XXUnknownSuperclass (ChatKitAdditions)
-(BOOL)ckCanDismissWhenSuspending;
@end

@interface XXUnknownSuperclass (ChatKitAdditions)
-(BOOL)ckCanDismissWhenSuspending;
@end

@interface XXUnknownSuperclass (ChatKitAdditions)
-(BOOL)ckCanDismissWhenSuspending;
@end

@interface XXUnknownSuperclass (Additions)
-(id)rawAddress;
-(CFPhoneNumberRef)copyPhoneNumber;
-(BOOL)isPhone;
-(BOOL)isEmail;
@end

@interface XXUnknownSuperclass (ComposeRecipientConvenience)
-(id)composeRecipientNormalizedAddresses;
-(id)composeRecipientAddresses;
-(id)composeRecipientHandles;
@end

@interface XXUnknownSuperclass (Additions)
+(id)texturedTranscriptBackgroundColor;
@end

@interface XXUnknownSuperclass (CKLazyTextView)
-(id)body;
-(id)webFrame;
@end

@interface XXUnknownSuperclass (CKAdditions)
-(void)__ck_targetToService:(id)service;
-(BOOL)__ck_hasValidAccountForService:(id)service;
-(BOOL)__ck_accountIsOperational:(id)operational forService:(id)service;
-(void)__ck_setAndIncrementDowngradeMarkersForManual:(BOOL)manual;
-(BOOL)__ck_hasDowngradeMarkers;
-(void)__ck_clearDowngradeMarkers;
-(void)__ck_setPreviousAccount:(id)account forService:(id)service;
-(id)__ck_previousAccountForService:(id)service;
-(id)__ck_placeholderDate;
@end

@interface XXUnknownSuperclass (CKAdditions)
-(id)_ck_chatForEntities:(id)entities createIfNecessary:(BOOL)necessary;
-(id)_ck_chatForHandles:(id)handles createIfNecessary:(BOOL)necessary;
@end

@interface XXUnknownSuperclass (CKAdditions)
-(BOOL)__ck_isEqualToMessageUsingGUID:(id)messageUsingGUID;
@end

@interface XXUnknownSuperclass (CKAdditions)
-(int)__ck_maxRecipientCount;
-(id)__ck_displayName;
-(BOOL)__ck_isSMS;
-(BOOL)__ck_isiMessage;
@end

@interface XXUnknownSuperclass (CKAdditions)
-(id)__ck_anyAccount;
-(id)__ck_defaultAccountForService:(id)service;
-(id)__ck_operationalPhoneAccountForService:(id)service;
@end

@interface XXUnknownSuperclass (CKAdditions)
-(id)__ck_handlesFromAddressStrings:(id)addressStrings;
@end

@interface XXUnknownSuperclass (CKTextBalloonView)
-(void)setContentModeForTextAlignment:(int)textAlignment;
@end

@interface XXUnknownSuperclass (CKSMSComposeControllerDelegate)
-(void)smsComposeControllerSendStarted:(id)started;
-(void)smsComposeControllerCancelled:(id)cancelled;
-(void)smsComposeControllerAppeared:(id)appeared;
-(void)smsComposeControllerDataInserted:(id)inserted;
@end

@interface XXUnknownSuperclass (CKHTMLHelper)
-(void)clearBody;
-(id)body;
-(id)document;
@end

@interface XXUnknownSuperclass (WebKitCompatibleLinkStringDrawing)
-(CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size;
-(id)webKitCompatibleLinkAttributedString;
-(id)webKitSpecialWhitespaceCharacterSet;
@end

