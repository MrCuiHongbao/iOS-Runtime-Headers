/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
 */

@interface GKPeerPickerViewController : UIViewController {
    BOOL _alertCancelled;
    BOOL _alertPresented;
    BOOL _animating;
    int _bluetoothStatus;
    GKContentView *_btView;
    GKContentView *_connectTypeView;
    unsigned int _connectionTypesMask;
    NSString *_currentConnectionTypeKey;
    GKContentView *_currentView;
    id _delegate;
    NSTimer *_invitationWaitTimer;
    GKContentView *_inviteView;
    GKContentView *_listView;
    NSMutableArray *_menuQueue;
    GKContentView *_noPeersView;
    UITableView *_peerTableView;
    NSMutableArray *_peers;
    NSString *_pendingPeer;
    int _pendingState;
    NSString *_searchingForServicesString;
    NSMutableDictionary *_sessionMap;
    int _state;
    GKContentView *_statusView;
    BOOL _updating;
}

@property (nonatomic) BOOL alertCancelled;
@property (nonatomic) BOOL alertPresented;
@property (getter=isAnimating, nonatomic) BOOL animating;
@property (nonatomic) int bluetoothStatus;
@property (nonatomic, retain) GKContentView *btView;
@property (nonatomic, retain) GKContentView *connectTypeView;
@property unsigned int connectionTypesMask;
@property (nonatomic) NSString *currentConnectionTypeKey;
@property (nonatomic, readonly) GKSession *currentSession;
@property (nonatomic, readonly) GKContentView *currentView;
@property id delegate;
@property (nonatomic, retain) NSTimer *invitationWaitTimer;
@property (nonatomic, retain) GKContentView *inviteView;
@property (nonatomic, retain) GKContentView *listView;
@property (nonatomic, retain) NSMutableArray *menuQueue;
@property (nonatomic, retain) GKContentView *noPeersView;
@property (nonatomic, retain) UITableView *peerTableView;
@property (nonatomic, retain) NSMutableArray *peers;
@property (nonatomic) int pendingState;
@property (nonatomic, copy) NSString *searchingForServicesString;
@property (nonatomic, retain) NSMutableDictionary *sessionMap;
@property (nonatomic) int state;
@property (nonatomic, retain) GKContentView *statusView;
@property (nonatomic) BOOL updating;
@property (getter=isVisible, nonatomic, readonly) BOOL visible;

- (void)_acceptInvitation:(id)arg1;
- (void)_btPowerStateChanged:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_changePanelAnimationDidEnd:(id)arg1;
- (id)_createAlertFromGKContentView:(id)arg1;
- (void)_createBTViewIfNeeded;
- (void)_createConnectTypeViewIfNeeded;
- (void)_createInviteViewIfNeeded;
- (void)_createListViewIfNeeded;
- (void)_createNoPeersViewIfNeeded;
- (void)_createStatusViewIfNeeded;
- (void)_declineInvitation:(id)arg1;
- (int)_determineBluetoothStatus;
- (void)_nearbyButtonPressed:(id)arg1;
- (void)_onlineButtonPressed:(id)arg1;
- (void)_setSessionAvailabilityForState:(int)arg1;
- (void)_setupListView;
- (BOOL)_shouldShowConnectTypeView;
- (void)_showBluetoothErrorView:(BOOL)arg1;
- (void)_showConnectTypeView:(BOOL)arg1;
- (void)_showInviteViewWithName:(id)arg1 animated:(BOOL)arg2;
- (void)_showListView:(BOOL)arg1;
- (void)_showNoPeersView:(BOOL)arg1;
- (void)_showRequestBluetoothView:(BOOL)arg1;
- (void)_showStatusView:(int)arg1 peerName:(id)arg2 animated:(BOOL)arg3;
- (void)_showView:(id)arg1 animated:(BOOL)arg2;
- (void)_sortAndUpdateTable;
- (void)_timedOutWaitingForInvitation:(id)arg1;
- (void)_turnBluetoothOn:(id)arg1;
- (BOOL)_updatePicker:(int)arg1;
- (BOOL)alertCancelled;
- (BOOL)alertPresented;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (int)bluetoothStatus;
- (id)btView;
- (id)connectTypeView;
- (unsigned int)connectionTypesMask;
- (void)contentView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)currentConnectionTypeKey;
- (id)currentSession;
- (id)currentView;
- (void)dealloc;
- (id)delegate;
- (void)didPresentAlertView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dismiss;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)invitationWaitTimer;
- (id)inviteView;
- (BOOL)isAnimating;
- (BOOL)isVisible;
- (id)listView;
- (void)loadInitialView;
- (void)loadView;
- (id)menuQueue;
- (id)noPeersView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)peerTableView;
- (id)peers;
- (int)pendingState;
- (id)searchingForServicesString;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didReceiveConnectionRequestFromPeer:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)session:(id)arg1 peerDidBecomeBusy:(id)arg2;
- (id)sessionMap;
- (void)setAlertCancelled:(BOOL)arg1;
- (void)setAlertPresented:(BOOL)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)setBluetoothStatus:(int)arg1;
- (void)setBtView:(id)arg1;
- (void)setConnectTypeView:(id)arg1;
- (void)setConnectionTypesMask:(unsigned int)arg1;
- (void)setCurrentConnectionTypeKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInvitationWaitTimer:(id)arg1;
- (void)setInviteView:(id)arg1;
- (void)setListView:(id)arg1;
- (void)setMenuQueue:(id)arg1;
- (void)setNoPeersView:(id)arg1;
- (void)setPeerTableView:(id)arg1;
- (void)setPeers:(id)arg1;
- (void)setPendingState:(int)arg1;
- (void)setSearchingForServicesString:(id)arg1;
- (void)setSessionMap:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStatusView:(id)arg1;
- (void)setUpdating:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)show;
- (int)state;
- (id)statusView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (BOOL)updating;

@end
