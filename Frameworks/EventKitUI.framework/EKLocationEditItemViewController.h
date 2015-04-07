/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendarItem, EKStructuredLocation, EKUIConferenceRoom, EKUILocationSearchModel, NSString, UISearchBar, UITableView, _UINavigationControllerPalette;

@interface EKLocationEditItemViewController : EKEditItemViewController <EKUILocationSearchModelDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    EKCalendarItem *_calendarItem;
    BOOL _needsSave;
    BOOL _onlyDisplayMapLocations;
    _UINavigationControllerPalette *_palette;
    struct CGSize { 
        float width; 
        float height; 
    } _preferredContentSize;
    UISearchBar *_searchBar;
    EKUILocationSearchModel *_searchModel;
    EKUIConferenceRoom *_selectedConferenceRoom;
    EKStructuredLocation *_selectedLocation;
    EKStructuredLocation *_structuredLocation;
    BOOL _supportsStructuredLocations;
    UITableView *_tableView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL needsSave;
@property BOOL onlyDisplayMapLocations;
@property(retain) EKUIConferenceRoom * selectedConferenceRoom;
@property(retain) EKStructuredLocation * selectedLocation;
@property(retain) EKStructuredLocation * structuredLocation;
@property(readonly) Class superclass;

+ (id)_sectionNameForSection:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)_cellForConferenceRoomRowInTableView:(id)arg1 indexPath:(id)arg2;
- (id)calendarItemForSearchModel:(id)arg1;
- (void)conferenceRoomSearchUpdated:(id)arg1;
- (id)contactsImage;
- (void)contactsSearchUpdated:(id)arg1;
- (void)currentLocationUpdated:(id)arg1;
- (void)dealloc;
- (void)eventsSearchUpdated:(id)arg1;
- (void)frequentsSearchUpdated:(id)arg1;
- (id)greyPinImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4;
- (id)itemAtIndexPath:(id)arg1;
- (void)loadView;
- (id)locationArrowImage;
- (void)locationSearchModel:(id)arg1 selectedLocation:(id)arg2 withError:(id)arg3;
- (void)mapSearchUpdated:(id)arg1;
- (BOOL)needsSave;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)onlyDisplayMapLocations;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (BOOL)presentModally;
- (void)recentsSearchUpdated:(id)arg1;
- (id)redPinImage;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)selectedConferenceRoom;
- (id)selectedLocation;
- (void)setNeedsSave:(BOOL)arg1;
- (void)setOnlyDisplayMapLocations:(BOOL)arg1;
- (void)setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSelectedConferenceRoom:(id)arg1;
- (void)setSelectedLocation:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (BOOL)showingCurrentLocationRow;
- (BOOL)showingTextRow;
- (id)structuredLocation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(int)arg2;
- (id)title;
- (void)useAsString:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
