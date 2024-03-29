/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSCoding.h"
#import </libobjc.A.h>
#import "WebKit-Structs.h"


@interface WebPreferences : NSObject <NSCoding> {
@private
	WebPreferencesPrivate* _private;
}
@property(assign) BOOL suppressesIncrementalRendering;	// converted property
@property(assign) unsigned cacheModel;	// converted property
@property(assign) BOOL usesPageCache;	// converted property
@property(assign) BOOL privateBrowsingEnabled;	// converted property
@property(assign) BOOL autosaves;	// converted property
@property(assign) BOOL loadsImagesAutomatically;	// converted property
@property(assign) BOOL allowsAnimatedImageLooping;	// converted property
@property(assign) BOOL allowsAnimatedImages;	// converted property
@property(assign) BOOL javaScriptCanOpenWindowsAutomatically;	// converted property
@property(assign, getter=isJavaScriptEnabled) BOOL javaScriptEnabled;	// converted property
@property(assign, getter=isJavaEnabled) BOOL javaEnabled;	// converted property
@property(retain) id userStyleSheetLocation;	// converted property
@property(assign) BOOL userStyleSheetEnabled;	// converted property
@property(retain) id defaultTextEncodingName;	// converted property
@property(assign) int minimumLogicalFontSize;	// converted property
@property(assign) int minimumFontSize;	// converted property
@property(assign) int defaultFixedFontSize;	// converted property
@property(assign) int defaultFontSize;	// converted property
@property(retain) id fantasyFontFamily;	// converted property
@property(retain) id cursiveFontFamily;	// converted property
@property(retain) id sansSerifFontFamily;	// converted property
@property(retain) id serifFontFamily;	// converted property
@property(retain) id fixedFontFamily;	// converted property
@property(retain) id standardFontFamily;	// converted property
@property(assign) double incrementalRenderingSuppressionTimeoutInSeconds;	// converted property
@property(assign) BOOL requestAnimationFrameEnabled;	// converted property
@property(assign) BOOL shouldRespectImageOrientation;	// converted property
@property(assign) BOOL regionBasedColumnsEnabled;	// converted property
@property(assign) BOOL notificationsEnabled;	// converted property
@property(assign) BOOL shouldDisplayTextDescriptions;	// converted property
@property(assign) BOOL shouldDisplayCaptions;	// converted property
@property(assign) BOOL shouldDisplaySubtitles;	// converted property
@property(assign) BOOL wantsBalancedSetDefersLoadingBehavior;	// converted property
@property(assign) BOOL backspaceKeyNavigationEnabled;	// converted property
@property(assign) BOOL pageCacheSupportsPlugins;	// converted property
@property(retain) id pictographFontFamily;	// converted property
@property(assign) BOOL mockScrollbarsEnabled;	// converted property
@property(assign) BOOL mediaPlaybackAllowsInline;	// converted property
@property(assign) BOOL mediaPlaybackRequiresUserGesture;	// converted property
@property(assign) unsigned audioSessionCategoryOverride;	// converted property
@property(assign) BOOL mediaPlaybackAllowsAirPlay;	// converted property
@property(assign, getter=isHixie76WebSocketProtocolEnabled) BOOL hixie76WebSocketProtocolEnabled;	// converted property
@property(assign, getter=isAVFoundationEnabled) BOOL aVFoundationEnabled;	// converted property
@property(assign) BOOL loadsSiteIconsIgnoringImageLoadingPreference;	// converted property
@property(assign) BOOL asynchronousSpellCheckingEnabled;	// converted property
@property(assign) BOOL fullScreenEnabled;	// converted property
@property(assign) BOOL usePreHTML5ParserQuirks;	// converted property
@property(assign) int editingBehavior;	// converted property
@property(assign) BOOL hyperlinkAuditingEnabled;	// converted property
@property(assign) BOOL memoryInfoEnabled;	// converted property
@property(assign) BOOL paginateDuringLayoutEnabled;	// converted property
@property(assign, getter=isSpatialNavigationEnabled) BOOL spatialNavigationEnabled;	// converted property
@property(assign, getter=isFrameFlatteningEnabled) BOOL frameFlatteningEnabled;	// converted property
@property(assign) unsigned diskImageCacheMaximumCacheSize;	// converted property
@property(assign) unsigned diskImageCacheMinimumImageSize;	// converted property
@property(assign) BOOL diskImageCacheEnabled;	// converted property
@property(assign) BOOL accelerated2dCanvasEnabled;	// converted property
@property(assign) BOOL webGLEnabled;	// converted property
@property(assign) BOOL webAudioEnabled;	// converted property
@property(assign) BOOL showRepaintCounter;	// converted property
@property(assign) BOOL showDebugBorders;	// converted property
@property(assign) BOOL acceleratedCompositingEnabled;	// converted property
@property(assign) BOOL canvasUsesAcceleratedDrawing;	// converted property
@property(assign) BOOL acceleratedDrawingEnabled;	// converted property
@property(assign, getter=isDOMPasteAllowed) BOOL dOMPasteAllowed;	// converted property
@property(assign) BOOL experimentalNotificationsEnabled;	// converted property
@property(assign) BOOL localStorageEnabled;	// converted property
@property(assign) BOOL storageTrackerEnabled;	// converted property
@property(assign) BOOL databasesEnabled;	// converted property
@property(assign) int textDirectionSubmenuInclusionBehavior;	// converted property
@property(assign) int editableLinkBehavior;	// converted property
@property(assign) long long applicationCacheDefaultOriginQuota;	// converted property
@property(assign) long long applicationCacheTotalQuota;	// converted property
@property(assign) BOOL allowFileAccessFromFileURLs;	// converted property
@property(assign) BOOL allowUniversalAccessFromFileURLs;	// converted property
@property(assign, getter=isWebSecurityEnabled) BOOL webSecurityEnabled;	// converted property
@property(assign) BOOL usesEncodingDetector;	// converted property
@property(assign) BOOL automaticallyDetectsCacheModel;	// converted property
@property(assign) BOOL shrinksStandaloneImagesToFit;	// converted property
@property(assign, getter=isXSSAuditorEnabled) BOOL xSSAuditorEnabled;	// converted property
@property(assign) BOOL javaScriptCanAccessClipboard;	// converted property
@property(assign) BOOL zoomsTextOnly;	// converted property
@property(assign) BOOL offlineWebApplicationCacheEnabled;	// converted property
@property(assign) BOOL localFileContentSniffingEnabled;	// converted property
@property(assign) BOOL webArchiveDebugModeEnabled;	// converted property
@property(assign) BOOL applicationChromeModeEnabled;	// converted property
@property(assign) BOOL authorAndUserStylesEnabled;	// converted property
@property(assign) BOOL developerExtrasEnabled;	// converted property
@property(assign, getter=isDNSPrefetchingEnabled) BOOL dNSPrefetchingEnabled;	// converted property
+(void)initialize;
+(id)standardPreferences;
+(void)setWebKitLinkTimeVersion:(int)version;
+(void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned)policy;
+(void)_switchNetworkLoaderToNewTestingSession;
+(void)_setIBCreatorID:(id)anId;
+(void)_setInitialDefaultTextEncodingToSystemEncoding;
+(unsigned long)_systemCFStringEncoding;
+(void)_removeReferenceForIdentifier:(id)identifier;
+(void)_checkLastReferenceForIdentifier:(id)identifier;
+(void)_setInstance:(id)instance forIdentifier:(id)identifier;
+(id)_getInstanceForIdentifier:(id)identifier;
+(id)_concatenateKeyWithIBCreatorID:(id)ibcreatorID;
+(id)_IBCreatorID;
// converted property getter: -(BOOL)suppressesIncrementalRendering;
// converted property setter: -(void)setSuppressesIncrementalRendering:(BOOL)rendering;
// converted property getter: -(unsigned)cacheModel;
// converted property setter: -(void)setCacheModel:(unsigned)model;
-(void)_postCacheModelChangedNotification;
// converted property getter: -(BOOL)usesPageCache;
// converted property setter: -(void)setUsesPageCache:(BOOL)cache;
// converted property getter: -(BOOL)privateBrowsingEnabled;
// converted property setter: -(void)setPrivateBrowsingEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)autosaves;
// converted property setter: -(void)setAutosaves:(BOOL)autosaves;
// converted property getter: -(BOOL)loadsImagesAutomatically;
// converted property setter: -(void)setLoadsImagesAutomatically:(BOOL)automatically;
// converted property setter: -(void)setAllowsAnimatedImageLooping:(BOOL)looping;
// converted property getter: -(BOOL)allowsAnimatedImageLooping;
// converted property setter: -(void)setAllowsAnimatedImages:(BOOL)images;
// converted property getter: -(BOOL)allowsAnimatedImages;
-(void)setPlugInsEnabled:(BOOL)enabled;
-(BOOL)arePlugInsEnabled;
// converted property setter: -(void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)automatically;
// converted property getter: -(BOOL)javaScriptCanOpenWindowsAutomatically;
// converted property setter: -(void)setJavaScriptEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)isJavaScriptEnabled;
// converted property setter: -(void)setJavaEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)isJavaEnabled;
// converted property setter: -(void)setUserStyleSheetLocation:(id)location;
// converted property getter: -(id)userStyleSheetLocation;
// converted property setter: -(void)setUserStyleSheetEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)userStyleSheetEnabled;
// converted property setter: -(void)setDefaultTextEncodingName:(id)name;
// converted property getter: -(id)defaultTextEncodingName;
// converted property setter: -(void)setMinimumLogicalFontSize:(int)size;
// converted property getter: -(int)minimumLogicalFontSize;
// converted property setter: -(void)setMinimumFontSize:(int)size;
// converted property getter: -(int)minimumFontSize;
// converted property setter: -(void)setDefaultFixedFontSize:(int)size;
// converted property getter: -(int)defaultFixedFontSize;
// converted property setter: -(void)setDefaultFontSize:(int)size;
// converted property getter: -(int)defaultFontSize;
// converted property setter: -(void)setFantasyFontFamily:(id)family;
// converted property getter: -(id)fantasyFontFamily;
// converted property setter: -(void)setCursiveFontFamily:(id)family;
// converted property getter: -(id)cursiveFontFamily;
// converted property setter: -(void)setSansSerifFontFamily:(id)family;
// converted property getter: -(id)sansSerifFontFamily;
// converted property setter: -(void)setSerifFontFamily:(id)family;
// converted property getter: -(id)serifFontFamily;
// converted property setter: -(void)setFixedFontFamily:(id)family;
// converted property getter: -(id)fixedFontFamily;
// converted property setter: -(void)setStandardFontFamily:(id)family;
// converted property getter: -(id)standardFontFamily;
-(void)_setUnsignedLongLongValue:(unsigned long long)value forKey:(id)key;
-(unsigned long long)_unsignedLongLongValueForKey:(id)key;
-(void)_setLongLongValue:(long long)value forKey:(id)key;
-(long long)_longLongValueForKey:(id)key;
-(void)_setBoolValue:(BOOL)value forKey:(id)key;
-(BOOL)_boolValueForKey:(id)key;
-(void)_setFloatValue:(float)value forKey:(id)key;
-(float)_floatValueForKey:(id)key;
-(void)_setUnsignedIntValue:(unsigned)value forKey:(id)key;
-(unsigned)_unsignedIntValueForKey:(id)key;
-(void)_setIntegerValue:(int)value forKey:(id)key;
-(int)_integerValueForKey:(id)key;
-(void)_setStringValue:(id)value forKey:(id)key;
-(id)_stringValueForKey:(id)key;
-(id)_valueForKey:(id)key;
-(id)identifier;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithIdentifier:(id)identifier sendChangeNotification:(BOOL)notification;
-(id)initWithIdentifier:(id)identifier;
-(id)init;
// converted property getter: -(double)incrementalRenderingSuppressionTimeoutInSeconds;
// converted property setter: -(void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)seconds;
// converted property setter: -(void)setRequestAnimationFrameEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)requestAnimationFrameEnabled;
// converted property getter: -(BOOL)shouldRespectImageOrientation;
// converted property setter: -(void)setShouldRespectImageOrientation:(BOOL)respectImageOrientation;
// converted property getter: -(BOOL)regionBasedColumnsEnabled;
// converted property setter: -(void)setRegionBasedColumnsEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)notificationsEnabled;
// converted property setter: -(void)setNotificationsEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)shouldDisplayTextDescriptions;
// converted property setter: -(void)setShouldDisplayTextDescriptions:(BOOL)displayTextDescriptions;
// converted property getter: -(BOOL)shouldDisplayCaptions;
// converted property setter: -(void)setShouldDisplayCaptions:(BOOL)displayCaptions;
// converted property getter: -(BOOL)shouldDisplaySubtitles;
// converted property setter: -(void)setShouldDisplaySubtitles:(BOOL)displaySubtitles;
// converted property getter: -(BOOL)wantsBalancedSetDefersLoadingBehavior;
// converted property setter: -(void)setWantsBalancedSetDefersLoadingBehavior:(BOOL)behavior;
// converted property getter: -(BOOL)backspaceKeyNavigationEnabled;
// converted property setter: -(void)setBackspaceKeyNavigationEnabled:(BOOL)enabled;
-(void)_invalidateCachedPreferences;
// converted property setter: -(void)setPageCacheSupportsPlugins:(BOOL)plugins;
// converted property getter: -(BOOL)pageCacheSupportsPlugins;
// converted property setter: -(void)setPictographFontFamily:(id)family;
// converted property getter: -(id)pictographFontFamily;
// converted property setter: -(void)setMockScrollbarsEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)mockScrollbarsEnabled;
// converted property setter: -(void)setMediaPlaybackAllowsInline:(BOOL)anInline;
// converted property getter: -(BOOL)mediaPlaybackAllowsInline;
// converted property setter: -(void)setMediaPlaybackRequiresUserGesture:(BOOL)gesture;
// converted property getter: -(BOOL)mediaPlaybackRequiresUserGesture;
// converted property setter: -(void)setAudioSessionCategoryOverride:(unsigned)override;
// converted property getter: -(unsigned)audioSessionCategoryOverride;
// converted property setter: -(void)setMediaPlaybackAllowsAirPlay:(BOOL)play;
// converted property getter: -(BOOL)mediaPlaybackAllowsAirPlay;
// converted property getter: -(BOOL)isHixie76WebSocketProtocolEnabled;
// converted property setter: -(void)setHixie76WebSocketProtocolEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)isAVFoundationEnabled;
// converted property setter: -(void)setAVFoundationEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)loadsSiteIconsIgnoringImageLoadingPreference;
// converted property setter: -(void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)preference;
// converted property getter: -(BOOL)asynchronousSpellCheckingEnabled;
// converted property setter: -(void)setAsynchronousSpellCheckingEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)fullScreenEnabled;
// converted property setter: -(void)setFullScreenEnabled:(BOOL)enabled;
-(void)_setPreferenceForTestWithValue:(id)value forKey:(id)key;
-(void)willAddToWebView;
-(void)didRemoveFromWebView;
// converted property setter: -(void)setUsePreHTML5ParserQuirks:(BOOL)quirks;
// converted property getter: -(BOOL)usePreHTML5ParserQuirks;
// converted property setter: -(void)setEditingBehavior:(int)behavior;
// converted property getter: -(int)editingBehavior;
// converted property setter: -(void)setHyperlinkAuditingEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)hyperlinkAuditingEnabled;
// converted property setter: -(void)setMemoryInfoEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)memoryInfoEnabled;
// converted property setter: -(void)setPaginateDuringLayoutEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)paginateDuringLayoutEnabled;
// converted property setter: -(void)setSpatialNavigationEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)isSpatialNavigationEnabled;
// converted property setter: -(void)setFrameFlatteningEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)isFrameFlatteningEnabled;
-(void)_setDiskImageCacheSavedCacheDirectory:(id)directory;
-(id)_diskImageCacheSavedCacheDirectory;
// converted property setter: -(void)setDiskImageCacheMaximumCacheSize:(unsigned)size;
// converted property getter: -(unsigned)diskImageCacheMaximumCacheSize;
// converted property setter: -(void)setDiskImageCacheMinimumImageSize:(unsigned)size;
// converted property getter: -(unsigned)diskImageCacheMinimumImageSize;
// converted property setter: -(void)setDiskImageCacheEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)diskImageCacheEnabled;
// converted property setter: -(void)setAccelerated2dCanvasEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)accelerated2dCanvasEnabled;
// converted property setter: -(void)setWebGLEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)webGLEnabled;
// converted property setter: -(void)setWebAudioEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)webAudioEnabled;
// converted property setter: -(void)setShowRepaintCounter:(BOOL)counter;
// converted property getter: -(BOOL)showRepaintCounter;
// converted property setter: -(void)setShowDebugBorders:(BOOL)borders;
// converted property getter: -(BOOL)showDebugBorders;
-(void)setCSSRegionsEnabled:(BOOL)enabled;
-(BOOL)cssRegionsEnabled;
-(void)setCSSCustomFilterEnabled:(BOOL)enabled;
-(BOOL)cssCustomFilterEnabled;
// converted property setter: -(void)setAcceleratedCompositingEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)acceleratedCompositingEnabled;
// converted property setter: -(void)setCanvasUsesAcceleratedDrawing:(BOOL)drawing;
// converted property getter: -(BOOL)canvasUsesAcceleratedDrawing;
// converted property setter: -(void)setAcceleratedDrawingEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)acceleratedDrawingEnabled;
-(void)_setForceFTPDirectoryListings:(BOOL)listings;
-(BOOL)_forceFTPDirectoryListings;
-(void)_setFTPDirectoryTemplatePath:(id)path;
-(id)_ftpDirectoryTemplatePath;
-(void)_setLocalStorageDatabasePath:(id)path;
-(id)_localStorageDatabasePath;
// converted property setter: -(void)setDOMPasteAllowed:(BOOL)allowed;
// converted property getter: -(BOOL)isDOMPasteAllowed;
-(void)_postPreferencesChangedAPINotification;
-(void)_postPreferencesChangedNotification;
// converted property setter: -(void)setExperimentalNotificationsEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)experimentalNotificationsEnabled;
// converted property setter: -(void)setLocalStorageEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)localStorageEnabled;
// converted property setter: -(void)setStorageTrackerEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)storageTrackerEnabled;
// converted property setter: -(void)setDatabasesEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)databasesEnabled;
-(void)_setUseSiteSpecificSpoofing:(BOOL)spoofing;
-(BOOL)_useSiteSpecificSpoofing;
// converted property setter: -(void)setTextDirectionSubmenuInclusionBehavior:(int)behavior;
// converted property getter: -(int)textDirectionSubmenuInclusionBehavior;
// converted property setter: -(void)setEditableLinkBehavior:(int)behavior;
// converted property getter: -(int)editableLinkBehavior;
// converted property setter: -(void)setApplicationCacheDefaultOriginQuota:(long long)quota;
// converted property getter: -(long long)applicationCacheDefaultOriginQuota;
// converted property setter: -(void)setApplicationCacheTotalQuota:(long long)quota;
// converted property getter: -(long long)applicationCacheTotalQuota;
-(int)_interpolationQuality;
-(void)_setInterpolationQuality:(int)quality;
-(BOOL)_allowCompositingLayerVisualDegradation;
-(void)_setAllowCompositingLayerVisualDegradation:(BOOL)degradation;
-(BOOL)_alwaysUseAcceleratedOverflowScroll;
-(void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)scroll;
-(BOOL)_alwaysRequestGeolocationPermission;
-(void)_setAlwaysRequestGeolocationPermission:(BOOL)permission;
-(BOOL)_useLegacyNumberInputFieldFormatting;
-(void)_setUseLegacyNumberInputFieldFormatting:(BOOL)formatting;
-(BOOL)_allowMultiElementImplicitFormSubmission;
-(void)_setAllowMultiElementImplicitFormSubmission:(BOOL)submission;
-(BOOL)_alwaysUseBaselineOfPrimaryFont;
-(void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)primaryFont;
-(int)_NSURLMaxRequestSize;
-(void)_setNSURLMaxRequestSize:(int)size;
-(int)_NSURLDiskCacheSize;
-(void)_setNSURLDiskCacheSize:(int)size;
-(int)_NSURLMemoryCacheSize;
-(void)_setNSURLMemoryCacheSize:(int)size;
-(int)_objectCacheSize;
-(void)_setObjectCacheSize:(int)size;
-(int)_pageCacheSize;
-(void)_setPageCacheSize:(int)size;
-(float)_maxParseDuration;
-(void)_setMaxParseDuration:(float)duration;
-(int)_layoutInterval;
-(void)_setLayoutInterval:(int)interval;
-(float)_minimumZoomFontSize;
-(void)_setMinimumZoomFontSize:(float)size;
-(BOOL)_telephoneNumberParsingEnabled;
-(void)_setTelephoneNumberParsingEnabled:(BOOL)enabled;
-(void)_setStandalone:(BOOL)standalone;
-(BOOL)_standalone;
-(unsigned long)_maximumImageSize;
-(double)_backForwardCacheExpirationInterval;
// converted property setter: -(void)setAllowFileAccessFromFileURLs:(BOOL)fileURLs;
// converted property getter: -(BOOL)allowFileAccessFromFileURLs;
// converted property setter: -(void)setAllowUniversalAccessFromFileURLs:(BOOL)fileURLs;
// converted property getter: -(BOOL)allowUniversalAccessFromFileURLs;
// converted property setter: -(void)setWebSecurityEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)isWebSecurityEnabled;
// converted property setter: -(void)setUsesEncodingDetector:(BOOL)detector;
// converted property getter: -(BOOL)usesEncodingDetector;
// converted property setter: -(void)setAutomaticallyDetectsCacheModel:(BOOL)model;
// converted property getter: -(BOOL)automaticallyDetectsCacheModel;
// converted property setter: -(void)setShrinksStandaloneImagesToFit:(BOOL)fit;
// converted property getter: -(BOOL)shrinksStandaloneImagesToFit;
// converted property setter: -(void)setXSSAuditorEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)isXSSAuditorEnabled;
// converted property setter: -(void)setJavaScriptCanAccessClipboard:(BOOL)clipboard;
// converted property getter: -(BOOL)javaScriptCanAccessClipboard;
// converted property setter: -(void)setZoomsTextOnly:(BOOL)only;
// converted property getter: -(BOOL)zoomsTextOnly;
// converted property setter: -(void)setOfflineWebApplicationCacheEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)offlineWebApplicationCacheEnabled;
// converted property setter: -(void)setLocalFileContentSniffingEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)localFileContentSniffingEnabled;
// converted property setter: -(void)setWebArchiveDebugModeEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)webArchiveDebugModeEnabled;
// converted property setter: -(void)setApplicationChromeModeEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)applicationChromeModeEnabled;
// converted property setter: -(void)setAuthorAndUserStylesEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)authorAndUserStylesEnabled;
// converted property setter: -(void)setDeveloperExtrasEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)developerExtrasEnabled;
// converted property setter: -(void)setDNSPrefetchingEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)isDNSPrefetchingEnabled;
@end

