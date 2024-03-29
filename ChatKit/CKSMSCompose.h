/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "NSObject.h"


@protocol CKSMSCompose <NSObject>
+(BOOL)canSendPhotos:(int)photos videos:(int)videos audioClips:(int)clips;
+(double)maxTrimDurationForVideo;
+(double)maxTrimDurationForAudio;
+(BOOL)acceptsMIMEType:(id)type;
-(void)setUICustomizationData:(id)data;
-(void)forceCancelComposition;
-(void)setText:(id)text addresses:(id)addresses;
-(void)setTextEntryContentsVisible:(BOOL)visible;
-(void)disableCameraAttachments;
-(void)setCanEditRecipients:(BOOL)recipients;
-(void)setPendingAddresses:(id)addresses;
-(BOOL)insertFilename:(id)filename MIMEType:(id)type exportedFilename:(id)filename3 options:(id)options;
-(BOOL)insertFilename:(id)filename MIMEType:(id)type exportedFilename:(id)filename3;
-(BOOL)insertData:(id)data MIMEType:(id)type exportedFilename:(id)filename;
-(BOOL)insertTextPart:(id)part;
@end

