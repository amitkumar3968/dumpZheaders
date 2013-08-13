/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVCalendarServerResourceChangeElement.h"


@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement {
	int _created;
	int _updated;
	int _deleted;
}
@property(assign) int deleted;	// @synthesize=_deleted
@property(assign) int updated;	// @synthesize=_updated
@property(assign) int created;	// @synthesize=_created
// declared property setter: -(void)setDeleted:(int)deleted;
// declared property getter: -(int)deleted;
// declared property setter: -(void)setUpdated:(int)updated;
// declared property getter: -(int)updated;
// declared property setter: -(void)setCreated:(int)created;
// declared property getter: -(int)created;
-(id)copyParseRules;
-(void)setDeletedItem:(id)item;
-(void)setUpdatedItem:(id)item;
-(void)setCreatedItem:(id)item;
-(id)init;
@end
