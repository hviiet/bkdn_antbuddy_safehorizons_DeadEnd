const $ = document.querySelector.bind(document)
const $$ = document.querySelectorAll.bind(document)
const myTeamInfo = [
    {
        name: 'Việt Nguyễn',
        phoneNumber: '070270857',
        role: 'Back End',
        avatar: './assets/img/Eris-ln-thumb.jpg'
    },
    {
        name: 'Dương Anh',
        phoneNumber: '0584075164',
        role: 'Front End',
        avatar: './assets/img/Rudeus-ln-thumb.jpg'
    },
    {
        name: 'Cường Nguyễn',
        phoneNumber: '0775933761',
        role: 'Dev Ops',
        avatar: './assets/img/Ruijerd-ln-thumb.jpg'
    },
]
function render() {
    myTeamInfo.forEach(function(data) {
        const teamProfile = $('.team-profile')
        const info = `
        <div class="member">
            <div class="member-content">
                <div class="member-avatar">
                    <img src="${data.avatar}" alt="">
                </div>
                <div class="member-info">
                    <ul>
                        <li>
                            Full name: ${data.name}
                        </li>
                        <li>
                            Phone Number: ${data.phoneNumber}
                        </li>
                        <li>
                            Role: ${data.role}
                        </li>
                    </ul>
                </div>
            </div>
        </div>
        `
        teamProfile.innerHTML += info
    })
}
render()