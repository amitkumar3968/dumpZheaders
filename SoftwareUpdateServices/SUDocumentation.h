/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SoftwareUpdateServices-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSURL, NSMutableDictionary, NSString;

@interface SUDocumentation : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	NSURL* _baseDocumentationURL;
	NSString* _releaseNotesSummaryFileName;
	NSString* _releaseNotesFileName;
	NSString* _licenseAgreementFileName;
	NSString* _primaryLanguage;
	NSString* _humanReadableUpdateName;
	NSURL* _releaseNotesSummaryURL;
	NSURL* _releaseNotesURL;
	NSURL* _licenseAgreementURL;
	NSMutableDictionary* _cachedData;
}
@property(retain, nonatomic) NSURL* licenseAgreementURL;	// @synthesize=_licenseAgreementURL
@property(retain, nonatomic) NSURL* releaseNotesURL;	// @synthesize=_releaseNotesURL
@property(retain, nonatomic) NSURL* releaseNotesSummaryURL;	// @synthesize=_releaseNotesSummaryURL
@property(retain, nonatomic) NSString* humanReadableUpdateName;	// @synthesize=_humanReadableUpdateName
@property(retain, nonatomic) NSString* primaryLanguage;	// @synthesize=_primaryLanguage
@property(retain, nonatomic) NSString* releaseNotesFileName;	// @synthesize=_releaseNotesFileName
@property(retain, nonatomic) NSString* licenseAgreementFileName;	// @synthesize=_licenseAgreementFileName
@property(retain, nonatomic) NSString* releaseNotesSummaryFileName;	// @synthesize=_releaseNotesSummaryFileName
@property(retain, nonatomic) NSURL* baseDocumentationURL;	// @synthesize=_baseDocumentationURL
// declared property setter: -(void)setPrimaryLanguage:(id)language;
// declared property getter: -(id)primaryLanguage;
// declared property setter: -(void)setHumanReadableUpdateName:(id)name;
// declared property setter: -(void)setLicenseAgreementURL:(id)url;
// declared property getter: -(id)licenseAgreementURL;
// declared property setter: -(void)setLicenseAgreementFileName:(id)name;
// declared property setter: -(void)setReleaseNotesSummaryURL:(id)url;
// declared property getter: -(id)releaseNotesSummaryURL;
// declared property setter: -(void)setReleaseNotesSummaryFileName:(id)name;
// declared property setter: -(void)setReleaseNotesURL:(id)url;
// declared property getter: -(id)releaseNotesURL;
// declared property setter: -(void)setReleaseNotesFileName:(id)name;
// declared property setter: -(void)setBaseDocumentationURL:(id)url;
// declared property getter: -(id)baseDocumentationURL;
-(id)localizedDocumentationStringFromBundle:(CFBundleRef)bundle key:(id)key;
-(id)_localizedResourceURLForDocumentationAsset:(id)documentationAsset resource:(id)resource;
-(id)_cachedDocumentationDataForURL:(id)url;
-(void)_resetIfNecessary;
-(id)localizedURLFromBundle:(CFBundleRef)bundle resource:(id)resource;
-(id)localizedStringFromBundle:(CFBundleRef)bundle key:(id)key;
-(void)_clearTransientDocumentationData;
-(id)description;
-(BOOL)hasAnyDocumentation;
-(id)licenseAgreement;
// declared property getter: -(id)licenseAgreementFileName;
-(id)releaseNotes;
// declared property getter: -(id)releaseNotesFileName;
-(id)releaseNotesSummary;
// declared property getter: -(id)releaseNotesSummaryFileName;
// declared property getter: -(id)humanReadableUpdateName;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithDocumentationURL:(id)documentationURL;
-(id)init;
-(void)dealloc;
@end

