/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSDate;
@protocol CertInfoSheetViewControllerDelegate;

@interface CertInfoSheetViewController : XXUnknownSuperclass {
	NSString* _serviceName;
	NSString* _trustTitle;
	NSString* _trustSubtitle;
	NSString* _trustPurpose;
	NSDate* _trustExpiration;
	NSArray* _trustProperties;
	id<CertInfoSheetViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<CertInfoSheetViewControllerDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) NSArray* trustProperties;	// @synthesize=_trustProperties
@property(retain, nonatomic) NSDate* trustExpiration;	// @synthesize=_trustExpiration
@property(retain, nonatomic) NSString* trustPurpose;	// @synthesize=_trustPurpose
@property(retain, nonatomic) NSString* trustSubtitle;	// @synthesize=_trustSubtitle
@property(retain, nonatomic) NSString* trustTitle;	// @synthesize=_trustTitle
@property(retain, nonatomic) NSString* serviceName;	// @synthesize=_serviceName
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setTrustProperties:(id)properties;
// declared property getter: -(id)trustProperties;
// declared property setter: -(void)setTrustExpiration:(id)expiration;
// declared property getter: -(id)trustExpiration;
// declared property setter: -(void)setTrustPurpose:(id)purpose;
// declared property getter: -(id)trustPurpose;
// declared property setter: -(void)setTrustSubtitle:(id)subtitle;
// declared property getter: -(id)trustSubtitle;
// declared property setter: -(void)setTrustTitle:(id)title;
// declared property getter: -(id)trustTitle;
// declared property setter: -(void)setServiceName:(id)name;
// declared property getter: -(id)serviceName;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(void)_pushDetailsView;
-(void)_setupNavItem;
-(void)_accept;
-(void)_cancel;
-(void)_dismissWithResult:(int)result;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
@end

