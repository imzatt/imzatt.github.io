const app = Vue.createApp({
    data(){
        return {
            id: 1,
            name: "Paing Htet",
            age: 22,
            profile: "images/profile.jpg",
            
            para: '<span style="color: red;">This is text</span>',
            seen: true,

            mark: 30,

            students: [
                {name: "Mg Mg", age: 15, gender:"male"},
                {name: "Su Su", age: 17, gender:"female"},
                {name: "ko Ko", age: 20, gender:"male"},
            ],

            username:"",
            money: 150.12345
        }
    },
    methods:{
        reverse(){
            this.name = this.name.split('').reverse().join('')
        }
    },
    computed:{
        girls(){
            return this.students.filter(row => row.gender=="female")
        },
        boys(){
            return this.students.filter(row => row.gender=="male")
        }
    },
    filters:{
        currenydecimal(value){
            return value.toFixed(2)
        }
    }
})