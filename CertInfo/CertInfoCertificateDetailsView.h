/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDataSource.h"
#import "CertInfo-Structs.h"

@class UITableView, NSMutableArray;

@interface CertInfoCertificateDetailsView : XXUnknownSuperclass <UITableViewDataSource> {
	UITableView* _tableView;
	NSMutableArray* _tableSections;
}
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)_detailForIndexPath:(id)indexPath;
-(id)_titleForIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame certificateProperties:(id)properties;
-(id)_sectionsFromProperties:(id)properties;
-(id)_sectionInfoForCertSection:(id)certSection title:(id)title;
-(id)_cellInfosForSection:(id)section;
-(void)appendInfoFromCertView:(id)certView;
@end
