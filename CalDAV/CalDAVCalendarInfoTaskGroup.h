/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface CalDAVCalendarInfoTaskGroup : XXUnknownSuperclass {
	BOOL _fetchSharees;
}
@property(assign, nonatomic) BOOL fetchSharees;	// @synthesize=_fetchSharees
// declared property setter: -(void)setFetchSharees:(BOOL)sharees;
// declared property getter: -(BOOL)fetchSharees;
-(id)containerForURL:(id)url;
-(id)_copyContainerWithURL:(id)url andProperties:(id)properties;
-(id)_copyContainerParserMappings;
-(id)initWithAccountInfoProvider:(id)accountInfoProvider containerURLs:(id)urls taskManager:(id)manager;
@end
