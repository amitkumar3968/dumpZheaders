/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CoreDAVItem;

@interface CalDAVCalendarServerSetItem : XXUnknownSuperclass {
	CoreDAVItem* _href;
	CoreDAVItem* _commonName;
	CoreDAVItem* _summary;
	CoreDAVItem* _accessLevel;
}
@property(readonly, assign) CoreDAVItem* accessLevel;	// @synthesize=_accessLevel
@property(readonly, assign) CoreDAVItem* summary;	// @synthesize=_summary
@property(readonly, assign) CoreDAVItem* commonName;	// @synthesize=_commonName
@property(readonly, assign) CoreDAVItem* href;	// @synthesize=_href
// declared property getter: -(id)accessLevel;
// declared property getter: -(id)summary;
// declared property getter: -(id)commonName;
// declared property getter: -(id)href;
@end
